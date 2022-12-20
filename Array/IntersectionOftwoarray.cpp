//fiding the intersection of two sorted std::array 
//note it do not handle the duplication

#include<iostream>
using namespace std;

void findIntersection(int a[],int b[],int n,int m){
    int i=0;
    int j=0;
    set<int>st;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }else if(b[j]<a[i]){
            j++;
        }else{
            cout<<a[i++]<<" ";
            j++;
        }
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
    
    findIntersection(a,b,n,m);
}
