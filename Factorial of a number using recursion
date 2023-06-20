#include<stdio.h>
int factorial(int num){
    if (num==0){
        return 1;
    }
    else{
    return num*factorial(num-1);
    }
}
int main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    if(n<0){
        printf("Please enter positive number");
    }
    else{
        int result=factorial(n);
        printf("Factorial of %d is %d",n,result);
    }
}
