#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,2,3,4,6,3,8};
    vector<int> arr2= {3,3,4,9,10};
    for(int i = 0;i<arr2.size();i++){
        for(int j = 0;j<arr1.size();j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}