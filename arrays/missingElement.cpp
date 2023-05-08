#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,4,5};
    int mis;
    for(int i = 0;i<5;i++){
        if(arr[i]!=i){
            mis = i;
            break;
        }
    }
    cout<<mis;
    return 0;
}