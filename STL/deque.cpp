#include<iostream>
#include<deque>
using namespace std;

int main(){
    //declaration
    deque<int> a;

    //For inserting element of deque
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    //for printing the elements
    cout<<"the elements of deque is -->> ";
    for(int i : a){
        cout<<i<<" ";
    }cout<<endl;

    //for deleting the elements of deque
    a.pop_front();
    a.pop_back();

    //Now the new deque
    cout<<"Now the new deque -->> ";
    for(int i : a){
        cout<<i<<" ";
    }cout<<endl;

    //for printing the index element
    cout<<"Element at index number 1 -->> "<<a.at(1)<<endl;

    //For getting the first and last element of the vector....
    cout<<"First element -->> "<<a.front()<<endl<<"last element of the vector is -->> "<<a.back()<<endl;

    //for check the deque is empty or not
    cout<<"IS the deque is empty -->> "<<a.empty()<<endl;
    
    //for clearing all the element ----
    // a.clear();
    // for(int i : a){
    //     cout<<i<<" ";
    // }cout<<endl;

    a.erase(a.begin(),a.end());
    for(int i : a){
        cout<<i<<" ";
    }cout<<endl;

    return 0;

}