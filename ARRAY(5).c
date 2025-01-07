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
        
    if(n < 2) {
        printf("Array should have at least two elements to find the second largest element.\n");
        return 0;
    }
        
    int largest = arr[0];
    int second_largest = -1;  
        
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
        
    if(second_largest == -1) {
        printf("There is no second largest element (all elements might be the same).\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    
    return 0;
}

