#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"enter marks of BEE"<<endl;
    cin>>a;
    cout<<"enter marks of physics"<<endl;
    cin>>b;
    cout<<"enter marks of computer"<<endl;
    cin>>c;
    cout<<"enter marks of chemistry"<<endl;
    cin>>d;
    cout<<"enter marks of english"<<endl;
    cin>>e;
    int total = a+b+c+d+e;
    cout<<"total marks is : "<<total<<endl;
    float percentage = total/5;
    cout<<"percentage obtained : "<<percentage<<"%"<<endl;
    if(percentage>90){
        cout<<"yuo have obtained grade : A+"<<endl;
    }
    else if(percentage>80){
        cout<<"yuo have obtained grade : A"<<endl;
    }
    else if(percentage>70){
        cout<<"yuo have obtained grade : B"<<endl;
    }
    else if(percentage>60){
        cout<<"yuo have obtained grade : C"<<endl;
    }
    else if(percentage>50){
        cout<<"yuo have obtained grade : D"<<endl;
    }
    return 0;
    
}
