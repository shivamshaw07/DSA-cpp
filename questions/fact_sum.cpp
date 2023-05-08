#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int fact = 1;
    int sum = 0;
    for(int i = 1;i<=a;i++){
        fact = fact*i;
        sum = sum + fact;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;

}