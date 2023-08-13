#include<iostream>
using namespace std;
class node{
    public: 
        int data;
        node* next;
    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
            int value = this -> data;
            if(this -> next != NULL){
                next = NULL;
                delete next;
            }
            cout<<"destructor is called\n";
        }
};

void insertAtHead(node* &head,node* &tail,int data){
    if(head == NULL){
        head = new node(data);
        tail = head;
        return;
    }

    node* new_node = new node(data);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node* &head,node* &tail,int data){
    if(head == NULL){
        head = new node(data);
        tail = head;
        return;
    }
    node* new_node = new node(data);
    tail->next = new_node;
    tail = new_node;
}

void insertAtAnyPos(node* &head,node* &tail,int pos,int data){
    if(head == NULL){
        head = new node(data);
        tail = head;
        return;
    }
    if(pos<1){
        insertAtHead(head,tail,data);
        return;
    }
    int i = 1;
    node* prev = head;
    while(i < pos){
        if(prev->next == NULL) break;
        prev = prev->next;
        i++;
    }
    if(prev->next == NULL || pos>=i){
        insertAtTail(head,tail,data);
        return;
    }
    node* curr = prev->next;
    node* new_node = new node(data);
    new_node->next = curr;
    prev->next = new_node;

}
void deleteNode(node* &head,node* &tail,int pos){
    if(pos == 1 || pos<1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
        return;
    }

    int i = 1;
    node* curr = head;
    node* prev = curr;
    while(i<pos){
        prev = curr;
        curr = curr -> next;
        i++;
    }
    if(curr->next == NULL){
        prev->next = NULL;
        delete(curr);
        return;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node *head = NULL;
    node *tail = NULL;
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,11);
    insertAtAnyPos(head,tail,3,6);
    insertAtAnyPos(head,tail,12,12);
    print(head);
    cout<<"\nHead : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(head,tail,5);
    print(head);

    return 0;
}