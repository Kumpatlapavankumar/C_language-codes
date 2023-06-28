#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=0;n>=i;i++){
        sum=sum+i;
    };
    printf("Sum of 0 to %d is %d\n",n,sum);
    return 0;
}
