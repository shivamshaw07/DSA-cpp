#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[100];
    //Here we can put the dalimator alos. which allow us to stop taking string from the user---- here by default delimator is enter key
    cin.getline(arr,50,'\t');
    // gets(arr);
    cout<<arr;
    cout<<"\nLength is -> "<<strlen(arr);
    return 0;
}