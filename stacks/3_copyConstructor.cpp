#include<iostream>
#include<stack>
using namespace std;

void copy(stack<int> &st,stack<int> &result){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    copy(st,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    stack<int> result;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    
    copy(st,result);
    
    while(not result.empty()){
        cout<<result.top()<<" ";
        result.pop();
    }
    return 0;
}