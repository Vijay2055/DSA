//find the given number is odd or even by using mask varialble

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mask=1;
    if(n&1==1){
        cout<<"The given nuber is odd "<<endl;
    }else{
        cout<<"The given number is even"<<endl;
    }
}
