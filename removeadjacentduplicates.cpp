#include<bits/stdc++.h>
using namespace std;
// Link - https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
string removeDuplicates(string s) {
    stack<char> st;
    for(char c:s){
        if(st.empty()){
            st.push(c);
            continue;
        }
        if(st.top()==c)st.pop();
        else st.push(c);
    }     
    string str;
    while(!st.empty()){
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
}
int main(){
    
    return 0;
}