#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        int a = 1;
        cout<<"Enter the element "<<a+i<<" : ";
        cin>>arr[i];
    }
    for(int i = 0,j=n-1;i<n/2,j<n/2;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}