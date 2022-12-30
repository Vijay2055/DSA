#include<iostream>
using namespace std;

bool findPosition(int n,int k){
    int mask=1<<k;
    int postion=n&mask;
    return postion;
   
}

int main(){
    int n,k;
    cin>>n>>k;
    bool mask=findPosition(n,k);
     
     if(mask){
         cout<<"The postion of the given number is 1";
     }else{
         cout<<"The postion is 0";
     }
    
}
