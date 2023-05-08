#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v = {1,2,1,0,2,3};

    for(int i = 1;i<v.size()-1;i++){
        if(v[i-1]>v[i] && v[i+1]>v[i]){
            cout<<v[i];
        }
    }
    return 0;
}