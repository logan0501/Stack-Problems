#include<bits/stdc++.h>
using namespace std;
struct MyStack{
    queue<int> q1,q2;

    MyStack(){

    }
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.back());
            q1.pop();
        }
        queue<int> q=q1;
        q1=q2;
        q2=q;
    }
    
    int pop() {
        if(!q1.empty()){
            int data = q1.front();
            q1.pop();
            return data;
        }
        return -1;
        
    }
    
    int top() {
        if(!q1.empty())
            return q1.front();
        return -1;
    }
    
    bool empty() {
        return q1.empty();
    }
};
int main(){

    return 0;
}