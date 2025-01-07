#include<stdio.h>

int main(){
    char a[20];
    int i = 0,j, num, sum = 0, remainder, n, power;
    printf("Enter a string : ");
    scanf("%s", a);
    while(a[i] != '\0') {
        num = num * 10 + (a[i] - '0'); 
        i++;
    }
    n = num;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    n = num; 
    while (n != 0) {
        remainder = n % 10;
        power = 1;
        for ( j = 0; j < count; j++) {
            power *= remainder;
        }
        sum += power;
        n /= 10;
    }
    if (sum == num) {
        printf("The string %d is an Armstrong .\n", num);
    } else {
        printf("The string %d is NOT an Armstrong .\n", num);
    }

    return 0;
}

