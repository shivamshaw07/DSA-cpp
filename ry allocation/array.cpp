#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number -->> ";
    cin>>n;
    //here the pointer is pointing towards the heap memomy which is created 
    int* arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}