#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    // Swapping using XOR
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 

    printf("Swapped numbers: %d %d\n", a, b);
    return 0;
}