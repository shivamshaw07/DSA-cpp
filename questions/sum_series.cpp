#include<iostream>
using namespace std;

//Sum of the series

int main(){
    int a;
    cout<<"enter the number series sum you want"<<endl;
    cin>>a;
    int sum = 0;
    for(int i = 1;i<=a; i++){
        sum = sum+i;
    }
    cout<<"series sum of "<<a<<" is "<<sum<<endl;
    return 0;
}