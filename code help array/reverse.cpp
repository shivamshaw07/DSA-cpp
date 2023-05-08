#include<iostream>
#include<vector>
using namespace std;

//here we have have used vector to reversed

//reversing function
vector<int> reverse(vector<int> v,int m){
    int s = m+1,e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

//printing function
void print(vector<int> v){
    for(int i : v){
        cout<<i<< " ";
    }
    cout<<endl;
}

//main function
int main(){
    int n,a,m;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector <int> v;
    for(int i = 0;i<n;i++){
        int b = i+1;
        cout<<"Enter the "<<b<<" element : ";
        cin>>a;
        v.push_back(a);
    }
    cout<<"THe intput vector is : ";
    print(v);
    cout<<"Enter the index no. from where to be reversed : ";
    cin>>m;
    //here as the reverse function returns its value the print function prints the vector
    print(reverse(v,m));
    return 0;
}