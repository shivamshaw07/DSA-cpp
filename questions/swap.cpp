#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"new value of a : "<<a<<endl;
    cout<<"new value of b : "<<b<<endl;
    return 0;
}