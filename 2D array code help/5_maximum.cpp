#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3],int rows,int cols){
    int max = INT_MIN;
    for(int i = 0;i<rows;i++){
        for (int j = 0; j < cols; j++)
        {
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
        
    }
    return max;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,50,6},{7,8,9}};
    cout<<findMax(arr,3,3);
    return 0;
}