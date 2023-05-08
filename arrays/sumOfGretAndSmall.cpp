#include<iostream>
using namespace std;

int main(){
    int arr[5] = {86,65,3,4,45};
    int max = arr[0];
    int min = arr[0];

    for(int i = 0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max+min;
    return 0;
}