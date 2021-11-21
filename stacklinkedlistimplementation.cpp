#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top;
int isEmpty(){
    return top==NULL;
}
void push(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    Node* temp;
    if(!isEmpty())return;
    temp=top;
    top=top->next;
    temp->next=NULL;
    delete temp;
}
int peek(){
    if(isEmpty())
    return top->data;
    return -1;
}

int main(){

    return 0;
}