#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	int i=0;
	printf("Enter a string to find length :");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		i++;
	}	
	printf("Length = %d",i);
	return 0;
}
