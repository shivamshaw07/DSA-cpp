#include<iostream>
using namespace std;
// left mai dhundna hai
int firstOccur(int arr[],int size,int k){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else if(arr[mid]>k){
            e = mid - 1;
        }
    }
    return ans;
}
// ri8 mai dhundna hai
int lastOccur(int arr[],int size,int k){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else if(arr[mid]>k){
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int even[7] = {2,4,4,6,8,8,10};
    int odd[7] = {1,3,5,5,7,7,9};
    cout<<"First occurance of 8 is : "<<firstOccur(even,7,8);
    cout<<"\nlast occurance of 8 is : "<<lastOccur(even,7,8);
    return 0;
}