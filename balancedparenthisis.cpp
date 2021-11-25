#include<bits/stdc++.h>
using namespace std;
bool isMatching(char a,char b){
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}
bool isValid(string s) {
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c=='(' || c=='[' || c=='{'){
            st.push(c);
        }else{
            if(st.empty())return false;
            else if(!isMatching(st.top(),c))return false;
            st.pop();
        }
    }
    return st.empty()==true;
}
int main(){
    string s;
    cin>>s;
    cout<<isValid(s);
    return 0;
}