#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int originalnumber=number;
    int sum=0;
    while(number!=0){
        int rem=number%10;
        sum=sum+rem;
        number=number/10;
    };
    printf("Sum of the digits in %d is %d",originalnumber,sum);
    return 0;
}
