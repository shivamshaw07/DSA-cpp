#include<iostream>
using namespace std;
//pivot ie. we have to find the smallest element's index

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int arr[5] = {4,5,0,1,3};
    //the array should be in zig zag pattern while plotibg on graph i.e ascendind an then again ascending
    int get = pivot(arr,5);
    cout<<"the pivot element is at the index : "<<get;
    return 0;
}
