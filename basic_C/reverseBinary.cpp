//Given a 32 bit number X, reverse its binary form and print the answer in decimal.


#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
        int count[31]={0};
        int j=0;
    while(n>0){
       count[j]=(n&1);
       j++;
       n=n>>1;
    }
    long long int  ans=0, pos=1;
    for(int i=31;i>=0;i--){
        ans=ans+count[i]*pos;
        pos<<=1;
        
    }
    
    cout<<ans;
}
