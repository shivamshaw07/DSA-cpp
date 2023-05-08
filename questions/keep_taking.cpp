#include<iostream>
using namespace std;

int main(){
    int a;
    
    while(a%2==0){
        cout<<"keep entering a number"<<endl;
        cin>>a;
        cout<<a<<endl;
        if(a%2!=0){
            cout<<"now you can't enter any number as you have entered an odd number"<<endl;
            break;
        }
        
    }
    return 0;
    
}