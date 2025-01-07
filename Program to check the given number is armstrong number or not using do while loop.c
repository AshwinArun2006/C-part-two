#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, sum = 0, digits = 0;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &num);
    temp = num;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);
    temp = num;
    do {
        remainder = temp % 10;
        sum += pow(remainder, digits); 
        temp /= 10;
    } while (temp != 0);
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

