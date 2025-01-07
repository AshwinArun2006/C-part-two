#include<stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);
    
    getchar();  
    
    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);

    
    while (str1[i] != '\0') {
        i++;  
    }
    
    while (str2[j] != '\0') {
        str1[i] = str2[j];  
        i++;
        j++;
    }
    
    str1[i] = '\0';

    printf("Resulting string after append: %s\n", str1);

    return 0;
}

