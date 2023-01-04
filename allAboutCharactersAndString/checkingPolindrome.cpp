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







//checking polindrome without caring lowerCase and upperCase
#include<iostream>
using namespace std;

//function for converting upper case into lowCase
char lowCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }else{
       char temp=ch-'A'+'a';
       return temp;
       
       
    }
    
}

//function for checking polindrome

bool isPolindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(lowCase(a[s])!=lowCase(a[e])){
            return false;
        }
        else{
            s++;e--;
        }
    }
    return true;
    
}


//function for finding the length
int len(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin>>name;
    int n=len(name);
    
    if(isPolindrome(name,n)){
        cout<<"The given string "<<name<<" is polindrome"<<endl;
    }else{
        cout<<"The given string "<<name<<" is not polindrome"<<endl;
    }
    
    
    
}
