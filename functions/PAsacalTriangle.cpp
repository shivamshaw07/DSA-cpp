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
void pattern(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,r;
    cout<<"Enter number of rows : ";
    cin>>n;
    pattern(n);
    return 0;
}