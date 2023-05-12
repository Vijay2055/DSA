#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int mini=min(a,b);
    int factor=1;
    for(int i=mini;i>0;i--){
        if(a%i==0 && b%i==0){
            factor=i;
            break;
        }
    }
    return factor;
}

int main(){
    int a=100;
    int b=75;
    int value=gcd(a,b);
    cout<<value;
}
