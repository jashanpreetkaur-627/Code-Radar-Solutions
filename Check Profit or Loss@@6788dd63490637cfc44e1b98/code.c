#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Input cost price and selling price
    scanf("%d", &costPrice);

    scanf("%d", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}