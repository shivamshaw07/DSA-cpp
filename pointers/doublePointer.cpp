#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int *ptr = &i;
    int **pt = &ptr;

    cout<<"Address of i : "<<&i<<endl;
    cout<<"Value of i : "<<*ptr<<endl;
    cout<<"Again address of i : "<<*pt<<endl;
    return 0;
}
