#include<iostream>
#include<array>
#include<map>
using namespace std;

int main(){
    int arr[] = {1,2,1,2,3,3,4,5,1};
    map<int,int> mp;
    for(int i = 0; i < 9; i++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(auto it:mp){
        if(it.second == 1){
            cout<<it.first;
        }
    }
    
    return 0;
}