#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i = 0,j=4;i<5/2,j/2;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}