#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    if(a>0){
        cout<<"number is positive"<<endl;
    }
    else if(a<0){
        cout<<"number is negative"<<endl;
    }
    else{
        cout<<"nukmber is zero";
    }
    return 0;
}