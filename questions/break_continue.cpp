#include<iostream>
using namespace std;

int main(){
    int money = 3000;
    for(int date = 1; date<=30;date++){
        if(date%2==0){
            continue;
        }
        cout<<"you can go iut today"<<endl;
        money=money-300;
        if(money==0){
            break;
        }
    }
    return 0;
}