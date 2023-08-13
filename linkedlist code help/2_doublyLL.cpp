#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(){
            this -> data = 0;
            this -> next = NULL;
            this -> prev = NULL;
        }

        node(int data){
            this -> data = data;
            this -> next = NULL;
            this -> prev = NULL;
        }
        ~node(){
            int vaule = this -> data;
            if(this -> next != NULL ){
                next = NULL;
                delete next;
            }
            if(this -> prev != NULL ){
                prev = NULL;
                delete prev;
            }
        }
};

int len(node* head){
    int i = 0;
    while(head != NULL){
        head = head->next;
        i++;
    }
    return i;
}

void insertAtTail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
        return;
    }
    node* new_node = new node(data);
    tail -> next = new_node;
    new_node -> prev = tail;
    tail = new_node;
}

void insertAtHead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
        return;
    }
    node* new_node = new node(data);
    head -> prev = new_node;
    new_node -> next = head;
    head = new_node;
}

void insertAtpos(node* &head,node* &tail,int pos,int data){
    if(head == NULL){
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
        return;
    }

    if(pos == 1){
        insertAtHead(head,tail,data);
        return;
    }
    node* curr = head;
    node* prev;
    int i = 1;
    while(i<pos){
        if(prev->next == NULL) break;
        prev = curr;
        curr = curr->next;
        i++;
    }
    if(curr->next == NULL || pos>=i){
        insertAtTail(head,tail,data);
        return;
    }
    node* new_node = new node(data);
    new_node -> next = curr;
    new_node -> prev = prev;
    prev -> next = new_node;
    curr -> prev = new_node;

}

void deleteNode(node* &head,node* tail,int pos){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head -> next == NULL){
        node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if(pos == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete(temp);
        return;
    }

    if(pos == len(head)){
        node* temp = head;
        tail = tail->prev;
        temp -> prev = NULL;
        delete(temp);
        return;
    }
    
    int i = 1;
    node* right = head;
    node* left ;
    while(i<pos){
        left = right;
        right = right -> next;
    }
    right -> next -> prev = left;
    left -> next = right -> next; 
    right -> prev = NULL;
    right -> next = NULL;
    delete right;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,1);
    insertAtTail(head,tail,4);
    insertAtpos(head,tail,12,11);
    print(head);
    deleteNode(head,tail,5);
    print(head);
    return 0;
}