#include<iostream>
using namespace std;
//find the greatest element's index
int peak(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = s + (e-s)/2;
        if(arr[mid]<arr[mid + 1]){
            s = mid + 1;
        }
        //here it will check the arr[mid]> arr[mid+1] || arr[mid]==arr[mid+1]
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    // Here the array should be partially divided as one in accesending and the other in decending
    int arr[5] = {3,2,1,5,4};
    int get = peak(arr,5);
    cout<<"the peak element is at the index : "<<get;
    return 0;
}