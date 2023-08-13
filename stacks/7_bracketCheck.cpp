#include<iostream>
#include<stack>
using namespace std;

bool checkBracket(string str){
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' or str[i] == '[' or str[i] == '{' ){
            st.push(str[i]);
        }
        else{
            if(str[i]==')' and !st.empty() and st.top() == '('){
                st.pop();
            }
            else if(str[i]=='}' and !st.empty() and st.top() == '{'){
                st.pop();
            }
            else if(str[i]==']' and !st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string str ="(()){[]}";
    cout<<checkBracket(str);
    return 0;
}