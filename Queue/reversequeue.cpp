#include<bits/stdc++.h>
using namespace std;
queue<int> reviterative(queue<int> q)
{
       stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
       q.push(s.top());
       s.pop();
    }
    return q;
}

queue<int> revRecursive(queue<int> q){
    if(q.empty()){
        return ;
    }
    int x = q.front();
    q.pop();
    revRecursive(q);
    q.push(x);
}
int main(){

    return 0;
}