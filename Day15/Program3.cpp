//WAP in c++ for queue implemetation using array.
#include<iostream>
using namespace std;
class Queue{
private:
    int arr[100];
    int front;
    int rear;
public:
    Queue(){
        front=-1;
        rear=-1;
    }
    void enqueue(int val){

        if(rear==99){
            cout<<"Queue is Full"<<endl;
        }
        else{
            if(front==-1){
                front=0;
            }
            rear++;
            arr[rear]=val;
            cout<<val<<" inserted into queue"<<endl;
        }
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<arr[front]<<" removed from queue"<<endl;

            front++;
        }
    }
    int Front(){
        if(front==-1 || front>rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int Rear(){
        if(front==-1 || front>rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    bool isFull(){

        if(rear==99){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){

        if(front==-1 || front>rear){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    cout<<"Front element: "<<q.Front()<<endl;
    cout<<"Rear element: "<<q.Rear()<<endl;
    if(q.isFull()){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Queue is Not Full"<<endl;
    }
    if(q.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }
    return 0;
}