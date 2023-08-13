#include<iostream>
#include<stack>
using namespace std;

void remove(stack<int> st){
    if(st.empty()){
        return;
    }
    if(st.size() ==  1){
        st.pop();
    }
    else{
        int curr = st.top();
        st.pop();
        remove(st);
        st.push(curr);
    }
    
}

int main(){
    stack<int> st;
    
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);

    remove(st);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}