#include<iostream>
#include<array>
using namespace std;

int main(){
    // this the method of declaring array in STL
    array<int,4> a = {1,2,3,4};
    
    //this the method of getting size
    int size = a.size();

    for(int i = 0;i<size;i++){
        cout<<a[i]<<" ";
    }
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    // For getting the particular index element
    cout<<"Element at index no. 2 is "<<a.at(2)<<endl;

    //for checking the array is empty or not -- it will return boolean vale
    cout<<"Check whether the array is empty or not -->> "<<a.empty()<<endl;

    //For getting the first and last element of the array----
    cout<<"The first element is -->> "<<a.front()<<" -- Last element of the array is -->> "<<a.back()<<endl;
    return 0;
}