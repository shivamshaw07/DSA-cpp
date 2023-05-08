#include<iostream>
using namespace std;

void print(int a,int b){
    int i;
    for( i=a;i<=b;i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    printf("Enter initial point : ");
    scanf("%d",&a);
    printf("Enter final point : ");
    scanf("%d",&b);
    print(a,b);
    return 0;
}