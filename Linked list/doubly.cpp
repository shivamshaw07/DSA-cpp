#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;
        node(int data){
            this -> data = data;
            this -> next = NULL;
            this -> prev = NULL;
        }

        ~node(){
            int value = this -> data;
            if(this -> next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"destructor is called\n";
        }
};

void inseratTail(node* &tail , int data){
    node* temp = new node(data);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
}

void insertAthead(node* &head,int data){
    node* temp = new node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void inserTatpos(node* &head,node* &tail,int pos,int data){
    if(pos == 1){
        insertAthead(head,data);
        return;
    }

    node* temp = head;
    int count = 1;
    while(count<pos-1){
        temp = temp -> next;
        count++;
    }

    if(temp == NULL){
        inseratTail(tail,data);
        return;
    }

    node* insertAt = new node(data);
    insertAt -> next = temp -> next;
    insertAt -> prev = temp;
    temp -> next = insertAt; 
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(node *&head, int pos)
{
    // deleting 1st node
    if (pos == 1)
    {
        node* temp = head;
        head = head->next;
        // memory free of start node
        temp -> next = NULL;
        temp -> prev = NULL;
        delete temp;
    }

    // deleting any middle or last
    else
    {
        node *curr = head;
        node *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main(){
    node* node1 = new node(8);
    node* head = node1;
    node* tail = node1;

    print(head);
    insertAthead(head,10);
    print(head);
    inseratTail(tail,11);
    print(head);
    inserTatpos(head,tail,1,11);
    print(head);
    deleteNode(head,4);
    print(head);
    return 0;
}