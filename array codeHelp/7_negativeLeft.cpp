#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,-3,4,-5};
    int l = 0;
    int h = arr.size() - 1;
    while(l<=h){
        // if(arr[l]<0 && arr[h]<0){
        //     l++;
        // }
        // else if(arr[l]>0 && arr[h]<0){
        //     swap(arr[l],arr[h]);
        //     l++;
        //     h--;
        // }
        // else if(arr[l]<0 && arr[h]>0){
        //     l++;
        //     h--;
        // }
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}