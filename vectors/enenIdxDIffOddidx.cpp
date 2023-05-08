#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;
    vector <int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    // for(int i = 0;i<6;i++){
    //     cout<<v[i];
    // }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<v.size();i++){
        if(i == 0 || i%2 == 0){
            sum1 += v[i];
        }
        else{
            sum2 += v[i];
        }
    }
    cout<<"the difference of even and odd indexs are : "<<sum1-sum2;
    return 0;
}