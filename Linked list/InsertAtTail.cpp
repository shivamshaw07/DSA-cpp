#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtfront(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(9);
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;
    Node* head = node1;
    print(head);
    Node* tail = node1;
    insertAtfront(tail,12);
    print(head);
    insertAtfront(tail,1);
    print(head);
    insertAtfront(tail,188);
    print(head);
    cout<<(node1+2)->data;
    return 0;
}