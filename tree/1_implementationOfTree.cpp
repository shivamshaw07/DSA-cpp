#include<iostream>
#include<queue>
using namespace std;


//node bna do jo ki contain kREga data , left node and right node address
class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};


//now wee will create a node
node* buildTree(node* &root){
    //creating 1st node i.e root
    int data ;
    cout<<"Enter data -->> ";
    cin>>data;
    root = new node(data);

    //agar mera data -1 hai mtlb NULL hai or waha pr mera tree khtm ho jayega   
    if(data == -1){
        return NULL;
    }

    //warna left node bnayenge 
    cout<<"Enter data for the left insertion the node "<<data<<endl;
    root->left = buildTree(root->left);
    //asa well as we will create right node
    cout<<"Enter data for the right insertion the node "<<data<<endl;
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(not q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){ //null milega mtlb enter dab jayega 
            cout<<endl;
            if(not q.empty()){ //yaha pr or bhi content hai queue
                q.push(NULL); // tho yaha null dalna hoga 
            }
        }

        else{
            cout<<temp -> data<<" "; //print thr current node data
            if(temp->left){
            q.push(temp->left);//enqueue the left node if it exists
            }
            if(temp->right){
            q.push(temp->right); //enqueue the right node if it exists
            }
        }
        
    }
}

int main(){
    node* root = NULL; 
    cout<<"1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1"<<endl;
    buildTree(root);
    levelOrderTraversal(root);
    return 0;
}