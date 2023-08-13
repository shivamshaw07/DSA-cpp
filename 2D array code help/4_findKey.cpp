#include<iostream>
using namespace std;

bool findkey(int arr[][3],int row,int cols,int key){
    for(int i = 0;i<row;i++){
        for (int j = 0; j < cols; j++)
        {
            if(key == arr[i][j]){
                return true;
            }
        }
        
    }
    return false;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int key = 0;
    cout<<findkey(arr,3,3,key);
    return 0;
}