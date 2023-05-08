#include<iostream>
#include<stack>
using namespace std;

//In stack last in first out concept is used

int main(){
    stack<string> s;
    s.push("Shivam");
    s.push("Kumar");
    s.push("Shaw");

    //Shaw will get printed because it was the last one which have entered the stack
    cout<<"Top element is -->> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element after poping is -->> "<<s.top();
    cout<<"\nSize of the stack is -->> "<<s.size();
}