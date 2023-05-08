#include<iostream>
using namespace std;

int getlength(char a[]){
    int count = 0;
    for(int i = 0;a[i] != '\0';i++){
        count++;
    }
    return count;
}

bool check(char s[],int l){
    int st = 0,e = l-1;
    int check = 0;
    while(st<=e){
        if(s[st]!=s[e]){
            check++;
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}

int main(){
    char s[10];
    cout<<"enter your name : ";
    cin>>s;
    int length = getlength(s);
    cout<<length<<endl;

    cout<<check(s,length);
    return 0;
}