#include<stdio.h>
int main(){
int number;
int reverser=0;
printf("Enter a number:");
scanf("%d",&number);
while (number!=0){
    int rem=number%10;
    reverser=reverser*10+rem;
    number=number/10;
};
printf("your reverser number is=%d",reverser);
return 0;
}
