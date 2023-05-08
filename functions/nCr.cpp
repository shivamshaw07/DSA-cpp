#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i = 1;i<=n;i++){
        fac = fac*i; 
    }
    return fac;
}
int comb(int n,int r){
    int com = fact(n);
    int com2=fact(r)*fact(n-r);
    int com3 = com/com2;
    return com3;
}

int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<comb(n,r);
    return 0;
}