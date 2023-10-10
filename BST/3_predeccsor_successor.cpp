#include<iostream>
#include<queue>
using namespace std;
#include<vector>

vector<int> v;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this-> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* createNode(Node* &root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root -> data > data){
        root -> left = createNode(root -> left,data);
    }
    else{
        root -> right = createNode(root -> right,data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    if(data == -1) return;
    createNode(root,data);
    while(data != -1){
        cin>>data;
        if(data!=-1)
        createNode(root,data);
    }
}


void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout<<root -> data<<" ";
    v.push_back(root -> data);
    Inorder(root -> right);
}

int predecessor(int n,Node* root){
    if(root == NULL ) return -1;
    Node* temp = root;
    // Recursive method
    while(temp -> data != n){
        if(temp -> data > n) temp = temp -> left;
        else temp = temp -> right;
    }

    //find max in left subtree
    temp = temp -> left;

    while(1){
        if(temp -> right == NULL) break;
        temp = temp -> right;
    }
    return temp-> data;
}
int successor(int n,Node* root){
    if(root == NULL ) return -1;
    Node* temp = root;
    // Recursive method
    while(temp -> data != n){
        if(temp -> data > n) temp = temp -> left;
        else temp = temp -> right;
    }

    //find max in left subtree
    temp = temp -> right;

    while(1){
        if(temp -> left == NULL) break;
        temp = temp -> left;
    }
    return temp-> data;
}

int main(){
    Node* root = NULL;
    cout<<"Enter data -> ";
    takeInput(root);
    cout<<"\n printing Inorder : \n";
    Inorder(root);
    cout<<endl;
    cout<<"predecessor of 20 : "<<predecessor(20,root)<<endl;
    cout<<"successor of 11 : "<<successor(11,root)<<endl;
    return 0;
}

