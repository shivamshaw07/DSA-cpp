#include<iostream>
#include<string>
using namespace std;

//funtion to find duplicate and remove them
string removeDuplicate(string s){
    int i = 0; //itreator
    string ans = "";       //here we created this string as we want to store the resultant string
    while(i<s.length()){   //liner search hoge idhar i.e length of string
        if(ans.length()>0 && ans[ans.length() - 1] == s[i]){        //(ans.length()>0) it will check that the ans string any element or not
            ans.pop_back();                                         //  (ans[ans.length() - 1] == s[i]) if this condition satisfy than poping will occur
        }
        else{
            ans.push_back(s[i]);                        //or else new elemnt will be pushed in the ans string
        }
        i++;
    }
    return ans;
}

int main(){
    string s = "abbaca";
    cout<<removeDuplicate(s);       //funtion calling
    return 0;
}