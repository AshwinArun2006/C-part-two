#include<stdio.h>
int main() {
    int num, i;
    float fact = 1.0, sum = 0.0, term;

    printf("Enter a number to find the sum of the series: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        fact = fact * i;          
        term = (float)i / fact;    
        if (i % 2 == 0)
            sum -= term;
        else                       
            sum += term;
    }

    printf("Sum of the terms = %.6f\n", sum); 
    return 0;
}

