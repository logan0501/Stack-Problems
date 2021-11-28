#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int front,rear,capacity;
    int * queue;
    Queue(int n){
        front=rear=0;
        capacity=n;
        queue = new int[capacity];
    }
    bool isFull(){
        return rear==capacity;
    }
    bool isEmpty(){
        return front==rear;
    }
    void enqueue(int x){
        if(capacity = rear){
            cout<<"Queue is full";
            return;
        }
        queue[rear++]=x;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }
        return queue[front++];
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }
        for(int i=front;i<rear;i++){
            cout<<queue[i];
        }
    }
    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty";
        }
        return queue[front];
    }
   
};
int main(){

    return 0;
}