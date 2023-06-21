#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       int value= fibonacci(i);
       printf("%d\n",value);
    }
    return 0;
}
