#include<iostream>
using namespace std;
int input(int arr[],int n);
int output(int arr[],int n);

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    input(arr,n);
    cout<<"\n the array is : ";
    output(arr,n);
    return 0;
}

int input(int arr[],int n){
    for(int i = 0; i<n;i++){
        int a = i+1;
        cout<<"Enter element "<<a<<" : ";
        cin>>arr[i];
    }
}

int output(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
