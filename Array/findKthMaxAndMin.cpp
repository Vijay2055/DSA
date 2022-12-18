#include<iostream>
using namespace std;

int findmax(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    return arr[n-k];
    
}

int findmin(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    return arr[k-1];
    
}

int main(){
    int arr[]={7, 10, 4,3, 20, 15};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    cout<<"The 3rd smallest is: "<<findmin(arr,n,k);
    cout<<"The 3rd biggest num is:" <<findmax(arr,n,k);
    
    
}
