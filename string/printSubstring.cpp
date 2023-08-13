#include<iostream>
#include<string>
using namespace std;

void printSubstr(string s){
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(i != s.length()-1){
            for(int j = i;j<n;j++){
                cout<<s[i]<<s[j]<<" ";
            }
        }
        else{
            cout<<s[i]<<" ";
        }
    }
}

int main(){
    string s = "abc";
    printSubstr(s);
    return 0;
}