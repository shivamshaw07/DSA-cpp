#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int rev = 0;
        while(a>0){
            int rem = a%10;
            rev = (rev*10) + rem;
            a= a / 10;
        }
        cout<<"reversed number is : "<<rev<<endl;
        int temp=rev;
        if(temp==rev){    
            cout<<"number is palindrome"<<endl;
            
        }

   
        else{
            cout<<"number is not palindrome"<<endl;
        }
        return 0;
}