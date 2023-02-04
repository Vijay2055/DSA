// Method 1:
//checking the given string is Polindrome or not
#include<bits/stdc++.h>
using namespace std;

//getting the size of string
int Size(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count;
}

//checking boolean or not
bool CheckingPolindrome(char name [], int n){
  
    //storing the string in temp variable
    char temp[n];
    for(int i=0;i<n;i++){
        temp[i]=name[i];
    }
    
    //reversing the string inplace
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
    //checking the both string
    for(int i=0;i<n;i++){
        if(name[i]!=temp[i]){
            return false;
        }
        else{
            return true;
        }
        
    }
}

int main(){
    char name[100];
    cin>>name;
    int n=Size(name);
    if(CheckingPolindrome(name,n)==true){
        cout<<"Given String is Polindrome"<<endl;
    }else{
        cout<<"Not a Polindrome"<<endl;
    } 
}
