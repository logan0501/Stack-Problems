#include<bits/stdc++.h>
using namespace std;
struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        arr=new int[c];
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==cap-1;
    }

    void push(int x){
        if(!isFull()){
            arr[++top]=x;
        }else{
            cout<<"Overflow\n";
        }
    }
    int pop(){
        if(!isEmpty()){
          return arr[top--];;
        }else{
            cout<<"Underflow\n";
            return -1;
        }
    }
    int peek(){
        if(!isEmpty()){
            return arr[top];
        }else{
            cout<<"Empty\n";
            return -1;
        }
    }
    int size(){
        return top+1;
    }

};
int main(){
    MyStack st(5);
    st.push(10);
    st.push(20);
    cout<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.peek()<<endl;
    return 0;
}