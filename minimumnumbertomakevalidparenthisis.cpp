#include<bits/stdc++.h>
using namespace std;
// Link - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
int minAddToMakeValid(string s) {
    stack<char> st;
    for(char c:s){
        if(st.empty()){
            st.push(c);
            continue;
        }
        if(c==')' && st.top()=='(')st.pop();
        else st.push(c);
    }    
    return st.size();
 }
int main(){
    cout<<minAddToMakeValid("()))((");
    return 0;
}