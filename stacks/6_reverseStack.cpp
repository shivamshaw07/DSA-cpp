#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &st,int data){
    stack<int> temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(data);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

//reverse
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,curr);
}

int main(){
    stack<int> st;
    
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    // while(not st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // cout<<endl;
    reverseStack(st);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}