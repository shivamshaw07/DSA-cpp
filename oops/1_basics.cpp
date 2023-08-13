#include<iostream>
using namespace std;

class Animal{
    int weight;
    public:
        int age;
        string name;
        void sleep(){
            cout<<"sleeping"<<endl;
        } 

        void eat(){
            cout<<"Eating"<<endl;
        }
        void setWeight(int a){
            weight = a;
        }
        void getWeight(){
            cout<<weight<<endl;
        }
        ~Animal(){
            cout<<" destructor is called";
        }
};

int main(){
    // Animal obj1;
    // obj1.name = "shivam";
    // obj1.age = 19;
    // cout<<"Name is -->> "<<obj1.name<<endl;
    // cout<<"Age is -->> "<<obj1.age<<endl;
    // obj1.sleep();
    // obj1.eat();
    // obj1.setWeight(58);
    // cout<<"weight is -->> ";
    // obj1.getWeight();


    //dynamic allocation
    Animal* suresh = new Animal;
    suresh -> sleep();
    suresh->age = 12;
    cout<<suresh -> age;
    delete suresh;
    return 0;
}