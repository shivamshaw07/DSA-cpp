#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int swap = arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    cout<<"\nThe sorted array is : ";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}