#include<bits/stdc++.h>
using namespace std;
void previousGreater(int arr[],int n){
    stack<int> st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while (!st.empty() && st.top()<=arr[i])
        {
            st.pop();
        }
        int sp = st.empty()?-1:st.top();
        cout<<sp<<" ";
        st.push(arr[i]);
    }
}
int main(){
    
    return 0;
}