#include<iostream>
using namespace std;

class animal{
    public:
    void bark(){
        
        cout<<"bark"<<endl;
    }

};

class human{
    public:
    void speak()
{
    cout<<"speaking";
}
};

class merge: public animal, public human{

};

int main(){
    merge ss;
    ss.bark();
    ss.speak();
    return 0;
}