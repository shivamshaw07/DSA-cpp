#include<iostream>
using namespace std;

class stack{
    int capacity;
    int* arr;
    int top;
    public:
    stack(int c){
        this->capacity = c;
        this -> arr = new int[c];
        top = -1;
    }
    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        top += 1;
        this->arr[this->top] = data;
    }

    void pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        this->top--;
    }

    int gettop(){
        if(this-> top == -1){
            cout<<"Underflow"<<endl;
            return 0;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        if(this-> top == -1){
            return true;
        }
        return false;
    }

    void size(){
        cout<< this->top+1<<endl;
    }

    bool isFull(){
        if(this->top == this->capacity-1){
            return true;
        }
        return false;
    }
};

int main(){
    stack stack1(5);
    stack1.push(8);
    stack1.push(9);
    stack1.push(7);
    stack1.size();
    stack1.pop();
    cout<<stack1.isFull()<<endl;
    stack1.size();
    return 0;
}