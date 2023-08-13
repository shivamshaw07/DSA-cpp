#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void conStock(vector<int> arr,vector<int> &result){
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        int count = 1;
        for(int j=i-1; j >=0;j--){
            if(arr[j]<=arr[i]){
                count++;
            }
        }
        result[i]=count;
    }
    
}

int main(){
    vector<int> arr = {100,80,60,70,60,75,85};
    vector<int> result(arr.size(),1);
    conStock(arr,result);
    for(int i = 0; i < result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}