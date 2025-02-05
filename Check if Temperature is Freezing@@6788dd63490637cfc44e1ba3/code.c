#include <stdio.h>

int main() {
    int temperature;

    // Get temperature from user
    scanf("%d", &temperature);

    // Check if temperature is freezing
    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0;
}