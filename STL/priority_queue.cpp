#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){ 
    int m;
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int> >mini;

    //maxi
    maxi.push(5);
    maxi.push(2);
    maxi.push(1);
    maxi.push(0);
    maxi.push(3);

    //This the code for accessing the maxi queue
    cout<<"Size of maxi is -->> "<<maxi.size()<<endl;
    m = maxi.size();
    for(auto i = 0;i<m;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    //mini
    mini.push(5);
    mini.push(2);
    mini.push(1);
    mini.push(0);
    mini.push(3);

    //This the code for accessing the maxi queue
    cout<<"\nSize of mini is -->> "<<mini.size()<<endl;
    int n = mini.size();
    for(auto i = 0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }

    //it also check for emptiness
}
