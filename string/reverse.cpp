#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void reverse(char arr[]){
    for(int i = 0,j= strlen(arr) -1; i < j ;i++,j--){
        int swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
    }
}

bool checkPalin(char arr[]){
    for(int i = 0,j = strlen(arr)-1;i<j;j--,i++){
        if(arr[i]!=arr[j]){
            return false;
        }
    }
    return true;
}

int main()
{
    // vector<int> ar;
    // ar = {1,2,3,4,5};
    // int size=ar.size();
    // cout<<size;
    char arr[] = "raceacar";
    reverse(arr);
    cout<<"Reversed array is -->> "<<arr<<endl;
    cout<<"Array is palindrome -->> "<<checkPalin(arr);
    return 0;
}