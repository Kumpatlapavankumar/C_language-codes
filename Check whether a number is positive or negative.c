#include<stdio.h>
int main(){
    int number;
    //writing in console 
    printf("Enter a number:");
    //taking input form user and place it in number variable type integer
    scanf("%d",&number);
    if(number>0){
        printf("%d is Positive number",number);
    }if(number==0){
        printf("%d is equal to zero", number);
    }
    else{
        printf(" %d is Negative number",number);
    }
    return 0;
}
