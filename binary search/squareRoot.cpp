#include<iostream>
using namespace std;

int binarysrearch(int n){
    int start = 0;
    int end = n;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square<n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"<enter a number : ";
    cin>>n;
    cout<<binarysrearch(n);
    return 0;
}