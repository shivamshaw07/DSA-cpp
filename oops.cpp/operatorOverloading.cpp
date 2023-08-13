#include<iostream>
using namespace std;

class param{
    public: 
        int val;

    void operator+(param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<value1-value2<<endl;
    }
};

int main(){
    param object1,object2;
    object1.val = 5;
    object2.val = 2;

    //minus krwao
    object1 + object2;
    return 0;
}