#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"enter length"<<endl;
    cin>>l;
    cout<<"enter breadth"<<endl;
    cin>>b;
    if(l==b){
        cout<<"it is a square"<<endl;
    }
    else{
        cout<<"it is a rectangle"<<endl;
    }
    return 0;
}