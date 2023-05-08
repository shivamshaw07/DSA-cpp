#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,1,2,3,4,4};
    for(int i = 0; i<7;i++){
        int count = -1;
        for(int j = i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == -1){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}