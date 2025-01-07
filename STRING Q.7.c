#include<stdio.h>
int main(){
    char a[20];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    while(a[i] != '\0') {
        i++;
    }

    printf("Reversed string: ");
    for(i = i - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }

    return 0;
}

