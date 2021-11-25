#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

vector <int> calculateSpanNaive(int price[], int n)
{
        vector<int> spanv;
        
        for(int i=0;i<n;i++){
            int span=1;
            for(int j=i-1;j>=0 && price[j]<=price[i];j--){
                span++;
            }
            spanv.push_back(span);
        }
        return spanv;
}

// Efficient
vector <int> calculateSpan(int price[], int n)
    {
       vector<int> spanv;
        stack<int> st;
        st.push(0);
        spanv.push_back(1);
        for(int i=1;i<n;i++){
            while(!st.empty() && price[st.top()]<=price[i]){
                st.pop();
            }
            spanv.push_back(st.empty()?i+1:i-st.top());
            st.push(i);
        }
        return spanv;
    }

int main(){

    return 0;
}