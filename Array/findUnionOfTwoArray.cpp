//find the union of two array in which you have to return only count how  many of the distinct element are there after the union

#include<bits/stdc++.h>
using namespace std;

int unionOFArray(int arr[],int n,int arr1[],int m){
    
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr1[i]);
    } 
    return st.size();   
}

int main(){
     int n,m;
    cin>>n>>m;
    int a[100];
    int b[500];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<unionOFArray(a,n,b,m);
    
}
