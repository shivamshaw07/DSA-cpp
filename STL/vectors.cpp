#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Declaring the vector in STL
    //Here the vector is declare with the zero capacity
    vector<int> v;
    //Capacity is define as the no. of element can be store
    
    //Here the vector is defined with size of 5 and each element is initilaize with 1
    vector<int> a(5,1);
     
    //Creating a new vector with the existing one 
    vector<int> last(a);
    cout<<"printing the new vector which has taken the value of the existing vector --->> ";
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    //As we enter a new element to the vector its capacity increases by double
    //and the size increases by 1
    cout<<"Capacity -->> "<<v.capacity()<<endl;

    //to insert a element in a vector 
    v.push_back(1);
    cout<<"Capcity of v is -->> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capcity of v is -->> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capcity of v is -->> "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capcity of v is -->> "<<v.capacity()<<endl;

    v.push_back(7);
    cout<<"Capcity of v is -->> "<<v.capacity()<<endl;

    //for getting the size of the vector---
    cout<<"Size of the vector -->> "<<v.size()<<endl;

    //for getting the element at the particular place -->> 
    cout<<"Element at the 2nd index is -->> "<<v.at(2)<<endl;

    //For getting the first and last element of the vector....
    cout<<"First element -->> "<<v.front()<<endl<<"last element of the vector is -->> "<<v.back()<<endl;

    //Elements before poping
    cout<<"Elements before poping ";
    for(int i:v){
        cout<<i<<" ";
    }
    //For deleting the element of the vector....
    v.pop_back();

    //Elements after poping
    cout<<"\nElements after poping \n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }  

    //For clearing all the elements....
    v.clear();
    cout<<"\nThe size of vector after clearing -->> "<<v.size()<<endl;
    cout<<"The capacity of vector after clearing -->> "<<v.capacity()<<endl;
}