#include <stdio.h>

int main() {
    int arr[10], max;
    
    // Input 10 numbers
    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Assume the first number is the greatest
    max = arr[0];
    
    // Compare with the rest of the numbers
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Print the greatest number
    printf("The greatest number is: %d\n", max);
    
    return 0;
}
