#include<iostream>
using namespace std;



class node{
    public: 
        int data;
        node* next;
        node(int data){
            this->data = data;
            this->next = NULL;
        }

};

void push(node* &top,node* &tail,int data){
    if(top == NULL){
        node* newNode = new node(data);
        top = newNode;
        tail = newNode;
    }
    node* newNode = new node(data);
    newNode -> next = top;
    top = newNode;
}

void pop(node* &top,node* &tail){
    top = top -> next;
}

void display(node* head){
    node* temp =head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int length(node* head){
    int count = 1;
    if(head == NULL){
        return 0;
    }
    while(head != NULL){
        head = head -> next;
        count++;
    }
    return count;
}

int main(){
    int ch,top=-1;
    node* head = NULL;
    node* tail = NULL;
    int capacity;
    cout<<"Enter capacity of stack -->> ";
    cin>>capacity;
    while(1){
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. Top Element"<<endl;
        cout<<"5. size"<<endl;
        cout<<"6. Exit"<<endl<<endl;
        cout<<"Enter your choice -->> ";
        cin>>ch;

        if(ch == 1){
            if(top == capacity-1){
                cout<<"overflow"<<endl;
            }
            else{
                int data;
                top += 1;
                cout<<"Enter a no. to push -->> ";
                cin>>data;
                push(head,tail,data);
            }
        }
        else if(ch == 2){
            if(top == -1){
                cout<<"UnderFlow"<<endl;
            }
            else{
                top -= 1;
                pop(head,tail);
            }
        }

        else if(ch == 3){
            display(head);
        }
        else if(ch == 4){
            cout<<" top element is -->> "<<head->data<<endl;

        }
        else if(ch == 5){
            cout<<length(head)<<endl;
        }

        else if(ch == 6){
            exit(0);
        }

        else{ 
            cout<<"Invaild choice ..."<<endl;
        }
    }
    
    return 0;
    

}