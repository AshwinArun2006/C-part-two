#include<stdio.h>
int main(){
	int num,i;
	printf("Enter a positive integer number :");
	scanf("%d",&num);
//	printing from 1 to num
	printf("From 1 to %d\n",num);
	for(i=1;i<=num;i++){
		printf("%d\t",i);
	}
//	printing from num to 1
	printf("\n\nFrom %d to 1\n",num);
	for(i=num;i>=1;i--){
		printf("%d\t",i);
	}
	return 0;
}
