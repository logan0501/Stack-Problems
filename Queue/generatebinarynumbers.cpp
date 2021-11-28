#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1
vector<string> generate(int N){
    vector<string> v;
    queue<string> q;
    q.push("1");
   
    for(int i=0;i<n;i++){
        string top = q.front();
        v.push_back(top);
        q.pop();
        q.push(top+"0");
        q.push(top+"1");
    }
    return v;
}
int main(){

    return 0;
}