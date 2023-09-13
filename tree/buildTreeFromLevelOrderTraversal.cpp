#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

void buildLevelOrderTraversal(node* root){
    queue<node*> q;
    int data;
    cout<<"Enter a data -->> ";
    cin>> data;

    root = new node(data);
    q.push(root);
    while(not q.empty()){
        node* temp = q.front();
        q.pop();
        int leftData;
        cout<<"Enter leftData for "<<temp -> data<<" : ";
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp->left);
        }
        else{
            temp -> left = NULL;
        }

        int rightData;
        cout<<"Enter rightData for "<<temp -> data<<" : ";
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
        else{
            temp -> left = NULL;
        }
        
    }
}

void leveOrderTraversal(node* root){
    queue<node*> q;
    q.push(root); 
    q.push(NULL); 

    while(not q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(not q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";
            if(temp -> left){ q.push(temp->left);}
            if(temp -> right){ q.push(temp->right);}
        }
    }
}

int main(){
    node* root = NULL;
    buildLevelOrderTraversal(root);
    leveOrderTraversal(root);
    return 0;
}