#include<iostream>
#include<math.h>
using namespace std;
bool prime(int num ){
    for(int i = 2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter the initial range : ";
    cin>>a;
    cout<<"Enter the final range : ";
    cin>>b;
    for(int i = a;i<=b;i++){
        if(prime(i)==true){
            cout<<i<< " is prime\n";
        }
    }
    return 0;
}