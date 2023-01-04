//Reverse a string without using any extra memory
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
        
    }
};


//Another approach to reversing a string

#include<iostream>
using namespace std;

void reverseString(string name){
    int s=0;
    int e=name.length()-1;
    cout<<e<<endl;
    while(s<=e){
        swap(name[s],name[e]);
        s++;e--;
    }
    cout<<name<<endl;
}


int main(){
    string name;
    cin>>name;
    reverseString(name);
  
}
