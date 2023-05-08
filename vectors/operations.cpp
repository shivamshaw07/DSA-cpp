#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    return 0;
}