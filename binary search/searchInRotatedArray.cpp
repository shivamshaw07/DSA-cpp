#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = s + (e-s)/2;
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int binarysearch(int arr[],int first,int size,int key){
    int start = first;
    int end = size-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }

        //go to left ya ri8 wala part
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5]={4,5,1,2,3};
    int key = 4;
    if(pivot(arr,5)>=key && pivot(arr,5) <= key){ 
        cout<<binarysearch(arr,pivot(arr,5),5,key);
    }
    else{
        cout<<binarysearch(arr,0,pivot(arr,5),key);
    }
}