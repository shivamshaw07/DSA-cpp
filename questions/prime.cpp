#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"number is prime"<<endl;
    }
    return 0;
}