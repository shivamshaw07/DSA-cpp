#include<iostream>
using namespace std;

int main(){
    int ch;
    cout<<"1.area of sqaure"<<endl;    
    cout<<"2.area of rectangle"<<endl;    
    cout<<"3.area of circle"<<endl;    
    cout<<"4.area of triangle"<<endl;    
    cout<<"Enter your choice : ";
    cin>>ch;

    if(ch == 1){
        int a;
        cout<<"Enter side of square : ";
        cin>>a;
        cout<<"Area of square is : "<<a*a<< "cm^2";
    }

    else if(ch == 2){
        int a,b;
        cout<<"Enter the lenght : ";
        cin>>a;
        cout<<"Enter the breadth : ";
        cin>>b;
        cout<<"Area of rectangle is : "<<a*b<< "cm^2";
    }

    else if(ch == 3){
        float r;
        cout<<"Enter radius of circle : ";
        cin>>r;
        cout<<"Area of circle is : "<<3.14*r*r<< "cm^2";
    }

    else if(ch == 4){
        int b,h;
        cout<<"Enter the base of triangle : ";
        cin>>b;
        cout<<"Enter the height of triangle : ";
        cin>>h;
        cout<<"Area of triangle is : "<<0.5*b*h<< "cm^2";
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}