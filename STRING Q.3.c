#include <stdio.h>
#include <string.h>

int main() {
    int n,i,j;    
    printf("Enter the number of names: ");
    scanf("%d", &n);  
    char names[n][100];     
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {      
        scanf(" %[^\n]s", names[i]); 
    }
    
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }   
    printf("\nThe names in alphabetical order are:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}

