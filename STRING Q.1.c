#include<stdio.h>

int main(){
    char a[20];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", a);

    while(a[i] != '\0') { 
        if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' ||
           a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' ||
           a[i] == 'u' || a[i] == 'U') {
            count++; 
        }
        i++; 
    }

    printf("Number of vowels = %d", count);

    return 0;
}

