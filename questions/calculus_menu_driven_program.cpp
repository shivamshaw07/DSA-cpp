#include<iostream>
using namespace std;

int main(){
    char ch = 'y';
    while(ch=='y'){
        int a;
        cout<<"enter the 1st number"<<endl;
        cin>>a;
        int b;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<"1.Addition"<<endl;
        cout<<"2.multiplication"<<endl;
        cout<<"3.substraction"<<endl;
        cout<<"4.division"<<endl;
        int c;
        cout<<"Enter your choice"<<endl;
        cin>>c;
        if(c==1){
            cout<<"addittion of two number is : "<<a+b<<endl;
        }
        else if(c==2){
        cout<<"multiplication of two number is : "<<a*b<<endl; 
        }
        else if(c==3){
            cout<<"substraction of two number is : "<<a-b<<endl;
        }
        else if(c==4){
            cout<<"division of two number is : "<<a/b<<endl;
        }
        else{
            cout<<"invalid input"<<endl;
        }
        cout<<"enter Y to continue"<<endl;
        cin>>ch;
    }
    
    return 0;



}