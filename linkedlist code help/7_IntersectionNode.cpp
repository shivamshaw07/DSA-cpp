#include<iostream>
using namespace std;

class node{
  public:
    int data;
    node* next;

    node(){
        this -> data = 0;
        this -> next = NULL;
    }
    
    node(int data){
        this -> data = data;
        this -> next = NULL;
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

int lenLL(node* head){
    int count = 1;
    while(head -> next != NULL){
        head = head -> next;
        count++;
    }
    return count;
}

void print(node* head){
    while(head != NULL){
        cout<<head -> data<< " ";
        head = head -> next;
    }
    cout<<endl;

}

int intersectNode(node* head1,node* head2){
    if(head1 == NULL || head2 == NULL){
        return 0;
    }
    int len1 = lenLL(head1);
    int len2 = lenLL(head2);
    int diff = abs(len2 - len1);
    

    if(len1 != len2){
        if(len1>len2){
            while(diff != 0){
                head1 = head1 ->  next;
                diff--;
            }
        }
        else{
            while(diff != 0){
                head2 = head2 ->  next;
                diff--;
            }
        }
    }


    while(head1 != NULL || head2 != NULL){
        if(head1 -> next == head2 -> next){
            return head1->next-> data;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;

    }
    cout<<"No intersection node";

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
    tail = new_node;
}

int main(){
    // node* head1 = NULL;
    // node* head2 = NULL;
    // node* tail = NULL;
    // insertAtTail(head1,tail,1);
    // insertAtTail(head1,tail,2);
    // insertAtTail(head1,tail,3);
    // insertAtTail(head1,tail,3);
    // insertAtTail(head1,tail,4);
    // insertAtTail(head1,tail,5);
    // print(head);
    // node* head = NULL;
    // node* tail = NULL;
    // insertAtTail(head2,tail,5);
    // insertAtTail(head2,tail,6);
    // insertAtTail(head2,tail,7);
    // insertAtTail(head2,tail,3);
    // insertAtTail(head2,tail,4);
    // insertAtTail(head2,tail,5);
    // print(head);



    node* head1 = new node(10);
    node* second1 = new node(20);
    node* third1= new node(30);
    node* fourth1 = new node(40);
    node* fifth1= new node(50);
    node* sixth1= new node(60);
    node* seventh1 = new node(70);
    node* eight1= new node(80);

    head1->next = second1; 
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = sixth1;
    sixth1->next = seventh1;
    seventh1->next = eight1;
    eight1->next = NULL;
    print(head1);

    
    node* head2= new node(30);
    node* second2 = new node(40);
    head2->next = second2; 
    second2->next = fifth1;
    print(head2);
    cout<<"Intersected at -->> "<<intersectNode(head1,head2)<<endl;
    return 0;
}