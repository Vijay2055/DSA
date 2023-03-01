//program for finding nearest num
//program to take an input and print it's nearest number
#include <stdio.h>

int main() {
      int n,ln,gn,i;
      printf("Enter number\n");
      scanf("%d",&n);
      ln=n-500;
      gn=n+500;
      for(i=ln;i<=n;i++){
          printf("%d ",i);
      }
      printf("\n********");
      
       for(i=n+1;i<=gn;i++){
          printf("%d ",i);
      }
      
     

    return 0;
}
