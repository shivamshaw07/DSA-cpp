#include<iostream>
using namespace std;

void fib(int n){
    int first = 0;
    int sec = 1;
    int next;
    for(int i = 2;i<n;i++){
        next = first + sec;
        cout<<next<<" ";
        first = sec;
        sec = next;   
    }
}

int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    cout<<"0 1 ";
    fib(n);
    return 0;
}