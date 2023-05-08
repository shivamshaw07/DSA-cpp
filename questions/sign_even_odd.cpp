#include<iostream>
using namespace std;
//to check no. is positive or negative and then even or odd
int main(){
    int a;
    cout<<"enter a number to be checked"<<endl;
    cin>>a;
    if(a>0){
        if(a%2==0){
            cout<<"Number is positive and even";
        }
    }
    else{
        cout<<"number is negative and hence we will not find even odd"<<endl;
    }
    return 0;
}