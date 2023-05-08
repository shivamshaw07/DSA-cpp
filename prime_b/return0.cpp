#include<iostream>
using namespace std;

int main(){
    int max = 0;
    int n;
    while(n!=0){
        cout<<"Enter a number other than '0' to continue -->> ";
        cin>>n;
        if(n==0){
            cout<<"Maximum number is -->> "<<max<<endl;
            exit(0);
        }
        int input;
        cout<<"Enter number -->> ";
        cin>>input;
        if(input > max){
            max = input;
        }
    }
    return 0;
}