//program for finding the place value
#include<stdio.h>
int main(){
    int n,c=1;
    scanf("%d",&n);
    while(n>0){
        int r=n%10;
        printf("The place value of %d is %d\n",r,c);
        c=c*10;
        n/=10;
    }
   
   return 0;
}
