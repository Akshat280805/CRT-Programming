// WAP in c++ for stack implementation using array
#include <iostream>
using namespace std;
class stack{
    int top;
    public:
    stack(){
        top = -1;
    }
    void push(int val){
        if (top<99){
            top ++;
            arr[top=val];
        }
        else {
            cout<<"Stack overflow"<<endl
        }
    }
    void pop(){
        if (top>=0){
            top--;
        }
        else {
        cout<<"Stack overflow"<<endl;
        }
    }
    int top(){
        if(top>=0){
            return arr[top];
        }
        else {
            cout<<"Stack is empty"<<endl;
        }
    }
    int size (){
        if (top>=0){
            return++top;
        }
    }
    bool is empty(){
        if (top<=-1){
            return true;
        }
        else{
            return false;
        }
    }
    int main(){
        stack s;
        s.push(2);
        s.pop();
        s.size();
        s.pop();
        s.top();
        s.push(3);
        s.push(4);
        s.push(5);
        s.isempty()
        return 0;
    }
}












