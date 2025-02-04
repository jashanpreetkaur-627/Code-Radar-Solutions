#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);  // Use %f to read a float
    
    printf("You entered: %.2f\n", num);  // Use %.2f to print float with 2 decimal places

    return 0;
}
