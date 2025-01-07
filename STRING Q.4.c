#include <stdio.h>
//	strrev()
void strrev_custom(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
//	strcat()
void strcat_custom(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; 
}
// strlen()
int strlen_custom(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
//	strcpy()
void strcpy_custom(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}
//	strcmp()
int strcmp_custom(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }
    return str1[i] - str2[i]; 
}

int main() {
    char str1[100], str2[100], dest[200];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    char str1_rev[100];
    strcpy_custom(str1_rev, str1);
    strrev_custom(str1_rev);
    printf("Reversed first string: %s\n", str1_rev);

    strcpy_custom(dest, str1);
    strcat_custom(dest, str2);
    printf("Concatenated string: %s\n", dest);

    printf("Length of first string: %d\n", strlen_custom(str1));
    printf("Length of second string: %d\n", strlen_custom(str2));

    strcpy_custom(dest, str1);
    printf("Copied first string to destination: %s\n", dest);

    int compare_result = strcmp_custom(str1, str2);
    if (compare_result == 0) {
        printf("The strings are equal.\n");
    } else if (compare_result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

