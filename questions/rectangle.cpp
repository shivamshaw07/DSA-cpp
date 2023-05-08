#include<iostream>
using namespace std;

int main(){
    int a,b ;
    cout<<"Enter number of rows"<<endl;
    cin>>a;
    cout<<"Enter number of columns"<<endl;
    cin>>b;
    for(int i =1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}