#include<stdio.h>
int main(){
	int num,i,j;
	printf("Enter the input number :");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}
