#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number to be checked"<<endl;
    cin>>num;
    if(num%5==0 && num%3==0){
        cout<<"number is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"number is not divisible by 3 and 5"<<endl;
    }
    return 0;
}