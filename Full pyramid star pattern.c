#include <stdio.h>
int main() {
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    int spaces=rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=spaces-1;j++){
            printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        spaces--;
        printf("\n");
    }
    return 0;
}
