#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[][3],int rows,int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print(arr,3,3);
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    print(arr,3,3);
    return 0;
}