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
};

void insertAtHead(node* &head,int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

void inserAtTail(node* tail, int data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp ;
}

// void inserAtpos(node*)

void print(node* head){
    node* temp = head;
    while(temp  != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    } 
    cout<<endl;
}

int main(){
    node* node1 = new node(9);
    node* head = node1;
    node* tail = node1;

    print(head);
    insertAtHead(head,10);
    print(head);
    inserAtTail(tail,11);
    print(head);
    print(tail);
    return 0;
}