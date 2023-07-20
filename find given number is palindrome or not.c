#include<stdio.h>
int main(){
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	int hello=x;
	if(x<0){
		printf("False");
	}
		int reverse=0;
		int tem=x;
		while(tem!=0){
			int digit=tem%10;
			reverse=reverse*10+digit;
			tem/=10;
		}
		if(reverse==hello){
		printf("True");
	}else{
		printf("false");
	}
	return 0;
}
