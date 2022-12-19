//sort without using sorting algorith
//time complexity must be O(n) only
 void sort012(int a[], int n)
    {
        int ptr1=0;
        int ptr2=n-1;
        int i=0;
        while(i<=ptr2){
            if(a[i]==0){
                swap(a[i++],a[ptr1++]);
            }else if(a[i]==2){
                swap(a[i],a[ptr2--]);
            }
          else{
              i++;
          }
        }
        
        
    }


//full code of this problem
#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    int ptr1=0;
    int i=0;
    int ptr2=n-1;
    while(i<=ptr2){
        if(arr[i]==0){
            swap(arr[i],arr[ptr1]);
            i++;ptr1++;
        }else if(arr[i]==2){
            swap(arr[i],arr[ptr2]);
            ptr2--;
        }else{
            i++;
        }
    }
}

