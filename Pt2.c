#include <stdio.h>
int main() {
    int num, i, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        for(j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 "); 
        }
        printf("\n"); 
    }
    return 0;
}

