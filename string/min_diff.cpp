#include<iostream>
#include<string>
#include<vector>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
        vector<int> minute;
        for(int i = 0;i < timePoints.size();i++){
            string curr = timePoints[i];
            int hrs = stoi(curr.substr(0,2));
            int mint = stoi(curr.substr(3,2));
            int totalmin = hrs*60 + mint;
            minute.push_back(totalmin);
        }
        for(auto i:minute){
            cout<<i<<endl;
        }
        int min = minute[0];
        for(int i = 0; i < minute.size();i++){
            if(abs(minute[i]-minute[i+1])<min){
                min = abs(minute[i]-minute[i+1]);
            //     cout<<abs(minute[i]-minute[i+1])<<endl;
            //     cout<<min;
            //     cout<<minute.size();
            }
        }
        return min;
}

int main(){
    vector<string> s;
    s = {"23:59","00:00"};
    cout<<findMinDifference(s);
    return 0;
}