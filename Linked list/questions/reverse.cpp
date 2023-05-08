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

void insertAthead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

node* reverse(node* &head){
    if(head==NULL || head -> next == NULL){
        return head;
    }
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev; 
        prev = curr;

        curr = forward;
    }
    return head =prev;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(5);
    node* head = node1;
    print(head);
    insertAthead(head,6);
    print(head);
    insertAthead(head,7);
    print(head);
    insertAthead(head,8);
    print(head);
    reverse(head);
    print(head);

    return 0;
}