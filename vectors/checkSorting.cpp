#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(6);
    for(int i = 0;i<6;i++){
        cin>>v[i];
    }
    int count = 0;
    int check = v[0];
    for(int i = 1;i<v.size();i++){
        if(check<v[i]){
            check = v[i];
        }
        else{
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"yes arranged";
    }
    else{
        cout<<"not arranged in accesnding order";
    }
    
    return 0;
}