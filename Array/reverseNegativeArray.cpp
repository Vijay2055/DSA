//Reverse an array where -ve elements are at beggining side and +ve elements are at right side
//don't care about the order of the element 

#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }else if(arr[j]>=0){
            j--;
        }else{
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }
    
}

int main() {
     int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
	return 0;
}

//second approach

void sortArray(int arr[],int n){
   int j=0;
   for(int i=0;i<n;i++){
       if(arr[i]<0){
           if(i!=j){
               swap(arr[i],arr[j]);
           }
           j++;
       }
   }
    
}
