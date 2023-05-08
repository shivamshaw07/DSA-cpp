#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~node(){
            int value = this -> data;
            if ( this -> next != NULL){
                delete next;               
                this -> next = NULL;
            }
            cout<<"Memorey is free--"<<endl;
        }
};

void create(node* &tail,int element,int d){
    //assuming that the element is present in the list
    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode-> next = newNode;
    }
    //non-empty list
    else{
        node* curr = tail;
        while(curr -> data != element){
            curr = curr->next;
        }
        //now the current is on the element wala node
        node* newNode = new node(d);
        newNode -> next = curr -> next;
        curr -> next = newNode;
    }
}

void print(node* tail){
    node* temp = tail;
    do
    {
        cout<<tail -> data << " ";
        tail = tail->next;
    } while (tail!=temp);
    cout<<endl;
}

void deleteNode(node* &tail,int ele){
    node* prev = tail;
    node* curr = prev->next;
    while( curr->data != ele){
        prev = curr;
        curr= curr->next;
    }
    prev->next = curr-> next;
    if(tail==curr){
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

int main(){
    node* tail = NULL;
    //inserting in empty list therefore element will not matter
    create(tail,9,6);
    print(tail);
    create(tail,6,5);
    print(tail);
    create(tail,5,7);
    print(tail);
    create(tail,7,8);
    print(tail);
    deleteNode(tail,6);
    print(tail);
    return 0;
}