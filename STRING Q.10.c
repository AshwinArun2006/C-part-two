#include<stdio.h>

int main() {
    char str[100], find, replace;
    int i = 0;   
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    printf("Enter the character to find: ");
    scanf(" %c", &find);  
    printf("Enter the character to replace with: ");
    scanf(" %c", &replace);
    
    while (str[i] != '\0') {
        if (str[i] == find) {
            str[i] = replace;  
        }
        i++;
    }
    
    printf("Modified string: %s\n", str);

    return 0;
}

