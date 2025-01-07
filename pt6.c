#include <stdio.h>
int main() {
    int n=5, i, j, val;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        val = 1; 
        for(j = 0; j <= i; j++) {
            printf("%1d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

