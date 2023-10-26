#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

class Heap{
    public:
        int *arr;
        int capacity;
        int heap_size;

        Heap(int cap){
            arr = new int[cap];
            capacity = cap;
            heap_size = 0;
        }

        void linearSearch(int val){
            for(int i = 0 ; i < heap_size; i++){
                if(arr[i] == val){
                    cout<<"Value found\n";
                    return;
                }
            }
            cout<<"Value not found\n";
        }

        void printArray(){
            for(int i = 0 ; i < heap_size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        int height(){
            return ceil(log2(heap_size+1))-1;
        }

        int parent(int i){
            return (i-1)/2;
        }
        int left(int i){
            return (2*i+1);
        }
        int right(int i){
            return (2*i +2);
        }

        void insert(int key){
            if(heap_size == capacity){
                cout<<"Overflow"<<endl;
                return ;
            }
            heap_size++;
            int i = heap_size-1;
            arr[i] = key;
            while(i!=0 && arr[parent(i)] > arr[i]){
                swap(arr[parent(i)] , arr[i]);
                i = parent(i);
            }
        }
};


int main(){
    int s;
    cout<<"Enter size of Heap : ";
    cin>>s;

    Heap obj(s);
    cout<<"Heap created--\n";

    int val,option;

    do
    {
        cout<<"What operation do you want to perform:   select your option\n";
        cout<<"1. Insertion"<<endl;
        cout<<"2. Deletion"<<endl;
        cout<<"3. Searching"<<endl;
        cout<<"4. Get Min"<<endl;
        cout<<"5. Extract Min"<<endl;
        cout<<"6. Height of Heap"<<endl;
        cout<<"7. Print/Traversal heap Value"<<endl;
        cout<<"8. Clear  screen"<<endl;
        cout<<"0. Exit"<<endl;

        cin>>option;

        switch (option)
        {
            case 0:
                break;
            case 1:
                cout<<"Insert opertion--"<<endl;
                cout<<"Enter a value to insert in heap : ";
                cin>>val;
                obj.insert(val);
                break;
            case 2:
                cout<<"Insert opertion--"<<endl;
                cout<<"Enter a value to insert in heap : ";
                cin>>val;
                //obj.delete(val);
                break;
            case 3:
                cout<<"Search operation--"<<endl;
                cout<<"Enter a value to be searched : ";
                cin>>val;
                obj.linearSearch(val);
                break;
            case 4:
                cout<<"Get Min operation--"<<endl;
                // cout<<obj.GetMin();
                break;
            case 5:
                cout<<"Extract Min operation--"<<endl;
                // cout<<obj.ExtractMin();
                break;
            case 6:
                cout<<"Get Height operation--"<<endl;
                cout<<obj.height()<<endl;
                break;
            case 7:
                cout<<"Print/Traversal operation"<<endl;
                obj.printArray();
                break;
            case 8:
                system("cls");
                break;
            default:
                cout<<"Enter a valid Value\n";
        }
    } while (option!=0);

    return 0;
    
}