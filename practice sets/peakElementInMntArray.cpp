#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 7, 9, 6, 4, 2};
    int s = 0, e = 7;
    while(s <= e){
        int mid = ((e-s)/2) + s;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]){
            e = mid - 1;
        }
    }

    return 0;
}