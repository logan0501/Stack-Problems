#include<bits/stdc++.h>
using namespace std;
struct KStacks{
    int *arr,*top,*next;
    int k,freetop,cap;
    KStacks(int k1,int n){
        int k=k1,cap=n;
        arr=new int[cap];
        top=new int[k];
        next=new int[cap];
        for(int i=0;i<k;i++){
            top[i]=-1;
        }
        freetop=0;
        for(int i=0;i<n-1;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    
    void push(int x,int sn){
        int i=freetop;
        freetop=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=x;
    }
    int pop(int sn){
        int i=top[sn];
        top[sn]=next[i];
        next[i]=freetop;
        freetop=i;
        return arr[i];
    }
};

int main(){

    return 0;
}