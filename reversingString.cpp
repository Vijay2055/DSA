#include<iostream>
using namespace std;

string reverseStr(string str){
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
}

int main(){
    string s;
    cin>>s;
    reverseStr(s);
}