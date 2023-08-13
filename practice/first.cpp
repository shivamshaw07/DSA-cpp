#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int first(vector<int> arr,int key){
    int start = 0;
    int end = arr.size() - 1;
    int occur = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            occur = mid;
            end = mid -1;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        if(arr[mid]>key){
            end = mid - 1;
        }
    }
    return occur;
}
int second(vector<int> arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int occur = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            occur = mid;
            start = mid + 1;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        if(arr[mid]>key){
            end = mid - 1;
        }
    }
    return occur;
}

int main(){
    vector<int> arr{ 1,2,3,4,4,6};
    // int b = first(arr,0);
    auto c = lower_bound(arr.begin(),arr.end(),4);
    int d = c-arr.begin();
    auto e = upper_bound(arr.begin(),arr.end(),4);
    int f = e - arr.begin();
    int result = e-c;
    cout<<result;
    return 0;
}