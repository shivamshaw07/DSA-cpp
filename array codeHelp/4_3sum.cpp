#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,3,5,7,2,4,6};
    int sum = 9;
    int flag =0;
    for(int i = 0; i<arr1.size();i++){
        for(int j = i+1; j<arr1.size();j++){
            for(int k = j+1;j<arr1.size();k++){
                if((arr1[i] + arr1[j] + arr1[k]) == sum){
                cout<<"pairs are ->> "<<"("<<arr1[i]<<","<<arr1[j]<<","<<arr1[k]<<")"<<endl;
                flag++;
                }
            }
        }
        //for getting only one pair
        // if(flag>0){
        //     break;
        // }
    }
    return 0;
}