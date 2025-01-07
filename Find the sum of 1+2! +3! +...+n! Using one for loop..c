#include<stdio.h>
int main(){
	int num,i,fact=1,sum=0;
	printf("Enter a number to find the factorial :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
		sum+=fact;
	}
	printf("Sum of the terms = %d",sum);
	return 0;
}
