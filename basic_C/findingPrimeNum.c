//find the prime number upto given num

#include<stdio.h>
int main(){
    int n;
    printf("Enter the num. upto you want to print prime\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int fact=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                fact++;
            }
        }
        if(fact==2)
        printf("%d ",i);
    }
}
