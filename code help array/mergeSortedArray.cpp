#include<iostream>
#include<vector>
using namespace std;

vector<int> merging(vector<int> v,vector<int> p,vector<int> m){
    int sizev=v.size();
    int sizep=p.size();
    for(int i = 0;i<sizev;i++){
        int a = v[i];
        m.push_back(a);
    }    
    for(int i = 0;i<sizep;i++){
        int a = p[i];
        m.push_back(a);
    }
    return m;
}

//main function
int main(){
    vector<int> v;
    vector<int> p;
    vector<int> m;
    v = {1,2,3,4};
    p = {4,5,6};
    merging(v,p,m);
    for(int i=0;i<m.size();i++){
        
        cout<<m[i]<<" ";
    }
    return 0;
}