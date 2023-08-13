#include<iostream>
#include<string>
using namespace std;

void occurance(string s,string part){
    for(int i = 0;i<s.length();i++){
        int m = i;
        int n=0;
        for(int j = 0;j<part.length();j++){
            if(part[j]==s[m]){
                m++;
                n++;
            }
            else{
                break;
            }
        }
        if(n == part.length()){
            cout<<i<<endl;
        }
    }
    
}

int main(){
    string s = "daabcbaabcabc";
    string part = "baab";
    occurance(s,part);
    return 0;
}