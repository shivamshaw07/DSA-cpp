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

node* merge(node* &head1,node* &head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* head3 = new node;
    node* ptr3 = head3;
    

    while(ptr1 && ptr2 ){
        if(ptr2->data > ptr1 -> data){
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }
        else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }
        ptr3 = ptr3 -> next;
    }

    if(ptr1){
        ptr3 -> next = ptr1;
    }
    else{
        ptr3 -> next = ptr2;
    }
    return head3->next;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* head1 = new node(1);
    node* second1 = new node(3);
    node* third1 = new node(5);
    
    head1 -> next = second1;
    second1 -> next = third1;
    third1 ->next = NULL;
    
    node* head2 = new node(2);
    node* second2 = new node(4);
    node* third2 = new node(6);
    
    head2 -> next = second2;
    second2 -> next = third2;
    third2 ->next = NULL;

    
    print(merge(head1,head2));
    return 0;
} 