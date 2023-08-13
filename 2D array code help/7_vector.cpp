#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > arr(3, vector<int>(3,-1));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[1][2];
    return 0;
    
}