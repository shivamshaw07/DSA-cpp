#include <iostream>
using namespace std;

void update(int *n){
    *n = *n+ 1;
}

int main()
{
    // int arr[10] = {1,3};
    // cout<<"Address of 1st memory block -->> "<<*(arr+1)<<endl;

    // //Here we have used the unique way to get the element of array
    // int i = 1;
    // //we have written the index
    // cout<<i[arr];

    //int temp[10];
    // cout << "Size of temp -->> " << sizeof(temp) << endl;
    // int *ptr = &temp[0];
    // cout << "Size of ptr -->> " << sizeof(*ptr) << endl;
    // cout << "Size of ptr -->> " << sizeof(&ptr) << endl;
    // cout << *temp;

    // char ch[10] = "abcdef";
    // cout<<ch<<endl;

    // char *ptr = &ch[0];
    // cout<<*(ptr+1)<<endl;

    int a=5;
    int *c=&a;

    cout<<*c<<endl;
    update(c);
    cout<<*c<<endl;
}