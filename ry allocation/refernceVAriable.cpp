#include<iostream>
using namespace std;

void update(int& a){
    a++;
}

int main(){
    int i = 5;
    int& j = i;
    update(j);
    cout<<"update -->> "<<i;
    return 0;
}