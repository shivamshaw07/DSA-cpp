#include<iostream>
using namespace std;

//to get the number of occurance we can simply (subtract the first occurance from last occurance and +1 ) 
// this the application of finding the first and last occurnace

int firstOccur(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
    }
    return ans;
}

int lastOccur(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,2,3,3,4,5};
    int occur = (lastOccur(arr,7,3) - firstOccur(arr,7,3)) + 1;
    cout<<"3 occurs "<<occur<<" times";
    return 0;
}