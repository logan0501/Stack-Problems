#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

vector<long long> nextLargerElement(vector<long long> arr, int n){
    
        vector<long long> v;
    stack<long long> st;
    v.push_back(-1);
    st.push(arr[n-1]);
    for(long long i=n-2;i>=0;i--){
        while(!st.empty() && arr[i]>=st.top() )
        st.pop();
        long long nextgreater = st.empty()?-1:st.top();
        v.push_back(nextgreater);
        st.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
        
}
int main(){

    return 0;
}