#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr;
    arr = {1,2,0,0,2,0,1,2,1,0,0};
    // for(int i = 0; i<arr.size();i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // for (int i = 0; i < arr.size() - 1; i++)
    // {
    //     for (int j = i+1; j < arr.size(); j++)
    //     {
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
        
    // }
    int l = 0, m = 0, h = arr.size() - 1;
    while (m<=h)
    {
        if(arr[m]==0){
            swap(arr[m],arr[l]);

            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    
    
    for(int i = 0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}