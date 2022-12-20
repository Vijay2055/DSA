//Note this is method do not handle the duplication in a array..

//find the union of two array;

#include<bits/stdc++.h>
using namespace std;

void unionOfTwoArray(int arr[],int brr[],int n,int m){
   int i=0;
   int j=0;
   while(i<n && j<m){
       if(arr[i]<brr[j]){
           cout<<arr[i]<<" ";
           i++;
       }else if(brr[j]<arr[i]){
           cout<<brr[j]<<" ";
           j++;
       }else{
           cout<<arr[i]<<" ";
           i++;j++;
       }
   }
   
   while(i<n){
       cout<<arr[i]<<" ";
       i++;
   }
   while(j<m){
       cout<<brr[j]<<" ";
       j++;
   }
   
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[100];
    int b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    unionOfTwoArray(a,b,n,m);
}


//This is the the method which can handle duplication

//find the union of two array;

#include<bits/stdc++.h>
using namespace std;

void unionOfTwoArray(int arr[],int brr[],int n,int m){
  set<int>st;
  for(int i=0;i<n;i++){
      st.insert(arr[i]);
  }
  for(int i=0;i<m;i++){
      st.insert(brr[i]);
  }
  
  for(auto itr:st){
      cout<<itr<<" ";
  }cout<<endl;
  
   
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[100];
    int b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    unionOfTwoArray(a,b,n,m);
}
    
    





    
