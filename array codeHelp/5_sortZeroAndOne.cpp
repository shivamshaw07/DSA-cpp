#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,0,1,1,0,1,0,1};
    //by looping method
    // for(int i = 0; i < arr.size();i++){
    //     for(int j = i +1; j<arr.size();j++){
    //         if(arr[i]>arr[j]){
    //             int swap = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = swap;
    //         }
    //     }
    // }

    //by two pointer approach
    int s = arr[0];
    int e = arr[arr.size()-1];
    for(int i = 0;i< arr.size();i++){
        if(arr[i]==0){
            int temp = arr[i];
            arr[i]=arr[s];
            arr[s] = temp;
            i++;
            s++;
        }
        else{
            int temp = arr[i];
            arr[i]=arr[e];
            arr[e] = temp;
            e--;
            i++;
        }
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}