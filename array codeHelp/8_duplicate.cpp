#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,3,4};
    int ans = 0;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == arr[i+1]){
            ans = arr[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}