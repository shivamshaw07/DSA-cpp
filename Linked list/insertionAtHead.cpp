#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; // Classes gives us the freedom to make any type of data type so we have created class type pointer
    //which will point to the address of the next node---->>> also this is a data member

    Node(int data){
        this -> data = data; // this -> is used to point the data member of the class
        this -> next = NULL; //last node will contain null address
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);//here we have created objext for Node class i.e temp --->> also it is dynamically created object
    temp -> next = head; //here we have to change the head as we are inserting from front side -->>>> Temp kaa next mai jayega(khud temp mai nahi)
    head = temp;//(Aur waise bhi head ko utha kr naya wala ka head bnana hoga)
}

void print(Node* &head){
    Node* temp = head;// new node is created and its value is set as head(i.e node1)
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;//baar baar next ko point karega aur iterate krte hue null tak puhunchega and then the loop will end

    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(9);//here we have created objext for Node class i.e temp --->> also it is dynamically created object
    cout<< node1 -> data << endl;//node1 is a object and we are accessing the data member of Node class
    cout<< node1 -> next << endl;
    //Node* head = node1; // here the address of 1st element of node1 will passed
    InsertAtHead(node1,12);
    print(node1);
    
    InsertAtHead(node1,9);
    print(node1);
    return 0;
}