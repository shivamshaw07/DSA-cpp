#include<iostream>
#include<queue>
using namespace std;

//In queue first in first out concept is used

int main(){
    queue<string> s;
    s.push("Shivam");
    s.push("Kumar");
    s.push("Shaw");

    //Shaw will get printed because it was the last one which have entered the stack
    cout<<"Top element is -->> "<<s.front()<<endl;

    s.pop();
    cout<<"front element after poping is -->> "<<s.front();
    //same we can use for printing the last element by using s.back()
    cout<<"\nSize of the stack is -->> "<<s.size();
}