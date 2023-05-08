#include<iostream>
using namespace std;

int main(){
    int num = 6;
    cout<<"num before -->> "<<num<<endl;
    int a = num;
    a++;
    cout<<"num after -->> "<<num<<endl;
    //address of operator
    cout<<"Address of num is -->> "<<&num<<endl;
    int *p = &num;
    cout<<"Address of num by pointer -->> "<<p<<endl;
    cout<<"value of num by pointer -->> "<<*p<<endl;
    (*p)++;
    cout<<"THe value of num -->> "<<num;
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int i = 3;
    int *t = &i;
    (*t)++;
    cout<<++(*t)<<endl;
    cout<<i<<endl;
    return 0;
}