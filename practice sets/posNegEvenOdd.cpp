#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbered to be checked : ";
    cin>>n;
    if(n>0){
        if(n%2==0){
            cout<<"The number is Positive and even";
        }
        else{
            cout<<"The number is Positive and odd";
        }
    }
    else{
        cout<<"The number is negative ";
    }
    // return 0;
}
