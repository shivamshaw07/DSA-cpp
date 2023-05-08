#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the no. whose table you want"<<endl;
    cin>>a;
    cout<<"table of "<<a<<" is :"<<endl;
    for(int i=1;i<=10;i++){
        cout<<a*i<<endl;
    }
    return 0;
}