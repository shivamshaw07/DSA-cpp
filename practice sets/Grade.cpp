#include<iostream>
using namespace std;

int main(){
    int phy,chem,eng,math,comp;
    cout<<"Enter the marks of physics : ";
    cin>>phy;
    cout<<"Enter the marks of chemistry : ";
    cin>>chem;
    cout<<"Enter the marks of english : ";
    cin>>eng;
    cout<<"Enter the marks of maths : ";
    cin>>math;
    cout<<"Enter the marks of computer : ";
    cin>>comp;

    int total = phy+chem+eng+comp+math;
    cout<<"Total marks : "<<total<<endl;
    float prec = total/5;
    cout<<"You obtained : "<<prec<<"%"<<endl;
    if(prec>90){
        cout<<"You have secured Grade A+"<<endl;
    }
    else if(prec<90 && prec>80){
        cout<<"You have secured Grade A"<<endl;
    }
    else if(prec<80 && prec>70){
        cout<<"You have secured Grade B"<<endl;
    }
    else if(prec<70 && prec>60){
        cout<<"You have secured Grade C"<<endl;
    }
    else if(prec<60 && prec>50){
        cout<<"You have secured Grade D"<<endl;
    }
    else{
        cout<<"Failed";
    }
}