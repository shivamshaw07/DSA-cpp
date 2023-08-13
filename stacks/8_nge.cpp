#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nge(vector<int> arr,vector<int> &result){
    stack<int> st;
    st.push(0);
    for(int i = 1; i < arr.size();i++){
        while(!st.empty() and arr[i]>arr[st.top()]){
            result[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    
}

int main(){
    vector<int> arr{4,6,3,1,0,9,5,6,7,3,2};
    vector<int> result(arr.size(),-1);
    nge(arr,result);
    for(int i = 0; i < result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}