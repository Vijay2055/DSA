//program to print composite number
#include <stdio.h>

int main() {
      int n;
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
          int fact=0;
          for(int j=1;j<=n;j++){
              if(i%j==0){
                  fact++;
              }
              
          }
          if(fact>2){
                  printf("%d ",i);
              }
      }

    return 0;
}
