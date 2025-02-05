#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

  
    scanf("%d", &costPrice);

    printf("Enter selling price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}