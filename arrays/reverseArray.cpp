#include<iostream>
using namespace std;
void reverse(int n,int arr[]){
    for(int i = 0,j=n-1;i<n/2,j>n/2;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void output(int n, int arr[] ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}

void input(int n, int arr[] ){
    int a = 1;
    for(int i = 0;i<n;i++){
        cout<<"Enter the element "<<a+i<<" : ";
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    
    input(n,arr);
    output(n,arr);
    reverse(n,arr);
    cout<<endl;
    output(n,arr);
    return 0;
}