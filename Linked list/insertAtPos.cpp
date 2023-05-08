#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Destructor is called\n";
    }
};

// insert at head
void insertAthead(node* &head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

// insert at tail
void insertAtTail(node* &tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;

}

// insert at any position
void insertAtPos(node* &tail, node* &head, int pos, int d)
{
    // if the given position is 1 we will simply use this
    if (pos == 1)
    {
        insertAthead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // since we have reached to the null position then we should use insertAtTail function
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // insert other than head and tail
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// printing the linked list
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(node *&head, int pos)
{
    // deleting 1st node
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free of start node
        temp->next = NULL;
        delete temp;
    }

    // deleting any middle or last
    else
    {
        node *curr = head;
        node *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

int main()
{
    node *node1 = new node(9);
    node *head = node1;
    node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAthead(head, 33);
    print(head);
    insertAtPos(tail, head, 1, 18);
    print(head);
    deleteNode(head, 2);
    print(head);
    return 0;
}