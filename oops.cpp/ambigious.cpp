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
    void bark()
{
    cout<<"speaking";
}
};

class merge: public animal, public human{

};


int main(){
    merge ss;
    //method to access same function name by different class  
    ss.animal::bark();
    ss.human::bark();
    return 0;
}