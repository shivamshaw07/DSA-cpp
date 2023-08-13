#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxWindow(vector<int> arr,int k){
    vector<int> res;
    deque<int> dq;
    //handling the first window
    for(int i = 0; i < k;i++){
        while (not dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);

    //handling the rest of the windows
    for(int i = k; i < arr.size();i++){
        //removing the first element--------
        while(not dq.empty() and dq.front() <= (i-k)){
            dq.pop_front();
        }
        while(not dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}

int main(){
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    vector<int> res = maxWindow(arr,3);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}
