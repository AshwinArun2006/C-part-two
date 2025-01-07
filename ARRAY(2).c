#include <stdio.h>

int main() {
    int n, i;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  
    
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Elements at odd positions: ");
    for(i = 0; i < n; i += 2) {  
        printf("%d ", arr[i]);
    }
    printf("\n");
    
   
    printf("Elements at even positions: ");
    for(i = 1; i < n; i += 2) {  
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

