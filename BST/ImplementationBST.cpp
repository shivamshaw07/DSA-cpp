#include<iostream>
#include<queue>
using namespace std;


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

void levelOrderTraversal(Node* root){
    if(root == NULL) return ;
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp -> data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void preoder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root -> data<<" ";
    preoder(root -> left);
    preoder(root -> right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}
void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout<<root -> data<<" ";
    Inorder(root -> right);
}

Node* minV(Node* root){
    Node* temp = root;
    while(temp!=NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* deleteNode(Node* root,int key){
    if(root == NULL) return root;

    else if(key > root->data){
        return root -> right= deleteNode( root -> right,key);
    }
    else if(key < root->data){
        return root -> left= deleteNode( root -> left,key);
    }

    else{
        if(root -> left == NULL){
            return root -> right;
        }
        else if(root -> right == NULL){
            return root -> left;
        }

        else{
            Node* temp = minV(root -> right);
            root -> data = temp -> data;
            root -> right = deleteNode(root->right,temp->data);
        }
    }
    return root;
}

int main(){
    Node* root = NULL;
    cout<<"Enter data -> ";
    takeInput(root);
    cout<<"\n printing Level order : \n";
    levelOrderTraversal(root);
    cout<<"\n printing preorder : \n";
    preoder(root);
    cout<<"\n printing postorder : \n";
    postorder(root);
    cout<<"\n printing Inorder : \n";
    Inorder(root);
    deleteNode(root,18);
    cout<<endl;
    Inorder(root);
    return 0;
}