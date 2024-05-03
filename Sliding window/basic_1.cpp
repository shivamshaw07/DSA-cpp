#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int maxSum = INT_MIN;
    // int sum = v[0] + v[1] + v[2];
    int j = 3;
    int sum = 0;
    for(int i = 0; i < v.size()-3; i++){
        if(i == 0){
            for(int k = i; k < i+3; k++){
                sum += v[k];
            }
        }
        else{
            sum += v[j] ;
            j++;
        }
        // sum += v[i] + v[i+1] + v[i+2];
            // cout<<sum<<endl;
        maxSum = max(maxSum,sum);
        sum -=  v[i];
    }
    cout<<maxSum;
    return 0;
}