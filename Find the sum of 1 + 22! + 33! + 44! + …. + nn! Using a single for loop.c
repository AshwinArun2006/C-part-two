#include<stdio.h>
int main(){
	int num,i;
	float fact=1.0,sum=0.0;
	printf("Enter a number to find the factorial :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
		sum+=(float)i/fact;
	}
	printf("Sum of the terms = %.6f",sum);
	return 0;
}
