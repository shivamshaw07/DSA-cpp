#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> qq;

    public:
        stack(){}

        //push opertaion
        void push(int x){
            this -> qq.push(x);
        }

        //pop operation
        void pop(){
            queue<int> temp;
            while(this->qq.size() > 1){
                temp.push(qq.front());
                this->qq.pop();
            }
            qq.pop();
            while (not temp.empty())
            {
                this->qq.push(temp.front());
                temp.pop();
            }
            
        }
        bool empty(){
            return this->qq.empty();
        }
        int front(){
            return this->qq.back();
        }
};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    while (not st.empty())
    {
        cout<<st.front()<<" ";
        st.pop();
    }
    return 0;
}