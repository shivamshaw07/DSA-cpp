#include<iostream>
using namespace std;

int main(){
    int arr[4]={3,6,8,2};
    int s = 0;
    int e = 3;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] < arr[mid + 1]){
            s = mid +1;
        }
        else{
            e = mid;
        }
    }
    cout<<s;
    return 0;
}