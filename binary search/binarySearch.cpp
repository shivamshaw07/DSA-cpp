#include<iostream>
using namespace std;

int binarysrearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return 1;
        }

        //go to left ya ri8 wala part
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {1,3,5,7,9,13};
    int evenindex = binarysrearch(even,6,6);
    int oddindex = binarysrearch(odd,6,177);
    cout<<"Index of 6 is : "<<evenindex<<endl;
    cout<<"Index of 9 is : "<<oddindex<<endl;
    return 0;
}