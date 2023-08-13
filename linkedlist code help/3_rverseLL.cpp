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
};

void insertAtHead(node* &head,node* &tail,int data){
    if(head ==  NULL){
        node*  new_node = new node(data);
        head = new_node;
        tail = new_node;
        return; 
    }
        
    node*  new_node = new node(data);
    new_node -> next = head;
    head = new_node;
}

void insertAtTail(node* &head,node* &tail,int data){
    if(head ==  NULL){
        node*  new_node = new node(data);
        head = new_node;
        tail = new_node;
        return; 
    }
        
    node*  new_node = new node(data);
    tail -> next = new_node;
    tail = new_node;
}

void insertAtPos(node* &head,node* &tail,int pos,int data){
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
    int i = 1;
    node* temp = head;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }
    node* new_node = new node(data);
    new_node->next = temp -> next;
    temp->next = new_node;
}

//reverse code----------------------------------------------------
node* reverse(node* &prev,node* &curr){
    if(curr == NULL ){
        return prev;
    }
    node* forward = curr -> next;
    curr -> next = prev;
    reverse(curr,forward);
}

//middle element
node* middle(node* head){
    if(head == NULL){
        cout<<"LL is empty ---";
        return head;
    }
    if(head -> next == NULL){
        return head;
    }
    node* slow = head;
    node* fast = head;
    while(fast->next != NULL){
        fast = fast -> next;
        if(fast->next != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    return slow;
}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    insertAtPos(head,tail,2,11);
    insertAtHead(head,tail,12);
    print(head);
    cout<<endl;
    // node* prev = NULL;
    // head = reverse(prev,head);
    // print(head);
    cout<<"middle is : "<<middle(head) -> data;
    return 0;
}