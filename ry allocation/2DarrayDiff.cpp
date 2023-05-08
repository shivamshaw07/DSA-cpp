#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the size of row -->> ";
    cin>>row;
    cout<<"Enter the size of column -->> ";
    cin>>col;

    //this we have created the 2* pointer which is pointing to the rows and responsible for formation of row 
    int** arr = new int*[row];

    //this we have created the 1* pointer which is pointing to the columns and responsible for formation of columns 
    for(int i = 0;i<row;i++){
        arr[i] = new int[col];
    }

    //taking input{
    for(int i  = 0; i < row;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //taking output
    for(int i  = 0; i < row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    //clearing the memory
    for(int i = 0;i<col;i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}