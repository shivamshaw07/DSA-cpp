#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of rwo and column -->> ";
    cin>>n;

    //this we have created the 2* pointer which is pointing to the rows and responsible for formation of row 
    int** arr = new int*[n];

    //this we have created the 1* pointer which is pointing to the columns and responsible for formation of columns 
    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }

    //taking input{
    for(int i  = 0; i < n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //taking output
    for(int i  = 0; i < n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    //clearing the memory
    for(int i = 0;i<n;i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}