#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,3,5,7,2,4,6};
    vector<int> arr2 = {2,4,6};
    int sum = 9;
    //for 2 array
    // for(int i = 0; i<arr1.size();i++){
    //     for(int j = 0; j<arr1.size();j++){
    //         if((arr1[i] + arr2[j]) == sum){
    //             cout<<"pairs are ->> "<<'\''<<arr1[i]<<'\''<<" "<<'\''<<arr2[j]<<'\''<<endl;
    //         }
    //     }
    // }
    
    //for single array
    int flag =0;
    for(int i = 0; i<arr1.size();i++){
        for(int j = i+1; j<arr1.size();j++){
            if(((arr1[i] + arr1[j]) == sum)&&i!=j){
                cout<<"pairs are ->> "<<"("<<arr1[i]<<","<<arr1[j]<<")"<<endl;
                flag++;
            }
        }
        if(flag>0){
            break;
        }
    }
    return 0;
}