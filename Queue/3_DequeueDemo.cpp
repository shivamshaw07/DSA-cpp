#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(10);
    dq.push_back(10);
    dq.push_front(20);
    dq.push_front(90);

    for(auto n : dq){
        cout<<n<<" ";
    }
    
    return 0;
}