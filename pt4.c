#include<stdio.h>
int main(){
	int num,i,j;
	printf("Enter the input number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}
