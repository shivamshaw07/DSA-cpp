#include<iostream>
using namespace std;

int search(int arr[],int size,int target){
    int s = 0;
    int e = size - 1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(mid>0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid<size && arr[mid+1]==target){
            return mid+1;
        }
        if(arr[mid]>target){
            e = mid -2;
        }
        else{
            s = mid + 2;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,3,40,20,50,80,70};
    int tar = 40;
    cout<<search(arr,7,10);
    return 0;
}