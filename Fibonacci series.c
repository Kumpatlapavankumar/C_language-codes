#include<stdio.h>
int main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    int n1=0;
    int n2=1;
    printf("%d\n%d\n",n1,n2);
    for(int i=3;i<=n;i++){
        int sum=n1+n2;
        printf("%d\n",sum);
        n1=n2;
        n2=sum;
    }
}
