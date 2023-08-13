#include<iostream>
#include<vector>
using namespace std;

void missing(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        int index = abs(arr[i]);
        if(arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for(int i = 0; i < arr.size();i++){
        if(arr[i] > 0){
            cout<< i+1<<endl;
        }
    }
}

int main(){
    vector<int> arr = {1,3,5,5,2};
    // for(int i = 1;i<=arr.size();i++){
    //     int flag = 0;
    //     for(int j = 0;j<arr.size();j++){
    //         if(i == arr[j]){
    //             flag++;
    //         }
    //     }
    //     if(flag == 0){
    //         cout<<i;
    //         exit(0);
    //     }
    // }
    // cout<<"Every element is preasent";

    //==== By index method====
    missing(arr);
    return 0;
}