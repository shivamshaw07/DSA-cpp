#include<iostream>
using namespace std;

class human{

    public:
        int age;
        int weight;
        int height;
    
};

//this is an example of public to public
// class male:public human{
//     public:
//     string name;
//     void spleep(){
//         cout<<"Male is slpeeping--->>>";
//     }
// };

//this is an example of public to protected
class male:protected human{
    public:
    string name;
    void spleep(){
        cout<<"Male is slpeeping--->>>";
    }
    //since this is an protected class we have to use getter and setter
    void getweight(){
        cout<<weight;
    }
    void setweight(int w){
        weight = w;
    }
};


int main(){
    male shivam;
    shivam.name = "shivas";
    cout<<shivam.name<<endl;
    shivam.setweight(56);
    shivam.getweight();
    return 0;
    
}