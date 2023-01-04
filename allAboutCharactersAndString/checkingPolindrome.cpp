//program for checking wether the given string is polindrome or not
#include<iostream>
using namespace std;

bool isPolindrome(string name,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
    
}

int main(){
    string name;
    cin>>name;
    int n=name.length();
    if(isPolindrome(name,n)){
        cout<<"Yes the "+name+" is polindrome"<<endl;
    }else{
        cout<<"No the "+name+" is not polindrome"<<endl;
    }
}
