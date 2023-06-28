#include<stdio.h>
int main(){
int number;
int digits=0;
printf("Enter a number:");
scanf("%d",&number);
while (number!=0){
    number=number/10;
    digits++;
};
printf("%d",digits);
return 0;
}
