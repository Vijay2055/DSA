//this is also called Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        maxi=max(sum,maxi);
        
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    int arr[]={1,2,3,-7,9,-10};
    int n=sizeof(arr)/sizeof(int);
   int MaxSum= kadane(arr,n);
   
   cout<<"The maximum sum of subArray is: "<<MaxSum;
    
}
