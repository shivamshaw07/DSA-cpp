#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        int a = 1;
        cout<<"Enter the element "<<a+i<<" : ";
        cin>>arr[i];
    }
    cout<<"\nThe actual array is : ";
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n;i=i+2){
        if(i+1<n){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    cout<<"\nThe alternate swaped elements array is : ";
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}