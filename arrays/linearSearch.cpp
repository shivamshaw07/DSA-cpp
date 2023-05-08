#include<iostream>
using namespace std;

int main(){
    int arr[4]= {1,2,4,4};
    int count = 0;
    for(int i = 0;i<5;i++){
        if(arr[i]==3){
            count++;
            break;
        }
        // else{
        //     return -1;
        // }
    }
    if(count>0){
        cout<<"3 is present";
    }
    else cout<<"-1";
}