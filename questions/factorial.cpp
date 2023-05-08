#include<iostream>
using namespace std;

//FACTORIAL

int main(){
    int a;
    cout<<"enter the number whose factorial is asked :";
    cin>>a;
    int act = 1;
    for(int i = 1; i<=a; i++){
        act = act*i;
    }
    cout<<"factorial of "<<a<<" is "<<act<<endl;
    return 0;
}
