#include<iostream>
using namespace std;

class hero{
    private:
        int health;
    
    public:
        char level;
        static int timeTocomplete;
        //deep copy i.e creating extra space
        // hero(hero& temp){
        //     cout<<"Copy constructor is called "<<endl;
        //     this -> health= temp.health;
        //     this -> health = temp.level;
        // }

        //by making this constructor be removed the default constructor
        // hero(int health,int level){
        //     this -> level = level;
        //     this -> health = health;
        // }
        void print(){
            cout<<"Level is "<<this -> level<<endl;
            cout<<"health is "<<this -> health<<endl;
        }
        void sethealth(int h){
            health = h;
        }
        void setlevel(char l){
            level = l;
        }

        int gethealth(){
            cout<<health<<endl;
        }
        void getlevel(){
            cout<<level<<endl;
        }
        //desructor
        ~hero(){
            cout<<"Desructor is called---"<<endl; 
        }
        //static function
        static int random(){
            return timeTocomplete;
        }
};

int hero::timeTocomplete=5;

int main(){
    //statical way 
    //hero shivam(80,'u');
    // shivam.sethealth(80);
    // shivam.setlevel('f');
    // cout<<"level is : "<<shivam.level<<endl;
    // cout<<"health is : ";
    // shivam.gethealth();


    // //dynamic way
    // hero*b = new hero;
    // b->setlevel('k');
    // b->sethealth(90);
    // cout<<"level is : "<<b->level<<endl;
    // cout<<"health is : ";
    // (*b).gethealth();


    //copy construtor
    // hero s(80,'k');
    // s.print();
    // //copy constructor
    // hero r(s);
    // r.print();
    // return 0;

    //for desreuctor
    // hero a;
    // hero *b = new hero();
    // delete b;

    //static keywor;
    hero a;
    cout<<hero::timeTocomplete<<endl;
    
    //we can also like this but it is not recomdable
    cout<<a.timeTocomplete<<endl;
    cout<<hero::random()<<endl;
    return 0;
}