//sorting an array by using bubble sort
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   
   for(int i=0;i<n;i++){
      for(int j=0;j<n-1;j++){
          if(arr[j]<arr[j+1]){
              int t=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
          }
      }
   }
   
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }

    return 0;
}
