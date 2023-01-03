//swaping two values without using third variables
#include<iostream>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   a=a^b;
   b=a^b;
   a=a^b;
   cout<<"a="<<a<<endl;
   cout<<"b="<<b<<endl;
   
}
