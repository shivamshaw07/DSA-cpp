#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this-> data = data;
            this -> next = NULL;
        }
};

class queue{
    node* head = NULL;
    node* tail = NULL;
    int size = 0;
    public:
    
    queue(){
        this -> head = NULL;
        this -> tail = NULL;
        this -> size = 0;
    }

    void enqueue(int data){
        node* newNode = new node(data);
        if(this->head == NULL){
            this -> head = newNode;
            this -> tail = newNode;
            this -> size++;
        }
        else{
            this->tail->next = newNode;
            this -> tail = newNode; 
            this -> size++;
        }
    }

    void dequeue(){
        if(this -> head == NULL){
            return;
        }
        node* temp = this -> head;
        this -> head = this -> head -> next;
        temp -> next = NULL;
        delete temp;
        this -> size--;
        
    }

    void front(){
        if(this -> head == NULL){
            return;
        }
        else{
            cout<<this -> head -> data<<endl;
        }
    }

    void displayQueue(){
        node* temp = head;
        while(temp){
        cout<< temp -> data<<" ";
        temp =temp -> next;
        }
        cout<<endl;
    }
    int Getsize(){
        return this->size;
    }
    
};

int main(){
    queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.enqueue(4);
    qu.displayQueue();
    qu.dequeue();
    qu.displayQueue();
    cout<<qu.Getsize();
    
    return 0;
}