#include<bits/stdc++.h>
using namespace std;

long long revrseNum(int n){
    long long rev=0;
    for(int i=0;i<sizeof(int)*8;i++){
        rev<<=1;
        if(n&1==1){
            rev^=1;
        }
        n>>=1;
    }
    return rev;
}

int main(){
    int num=1;
   int ret=revrseNum(num);
    cout<<ret;
}
