#include<iostream>
#include<stack>
using namespace std;



// this is for iterative
// void pushAtBottom(stack<int> &st,int data){
//     stack<int> temp;
//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(data);
//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }
// }


//this is for recursion
void pushAtBottom(stack<int> &st,int idx,int data){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    idx--;
    pushAtBottom(st,idx,data);
    if( idx == 1){
        st.push(data);
    }
    st.push(curr);
}

int main(){
    stack<int> st;
    
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);

    pushAtBottom(st,3,100);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}