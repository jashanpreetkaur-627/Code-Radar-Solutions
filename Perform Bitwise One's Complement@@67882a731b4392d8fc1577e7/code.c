#include <stdio.h>

int main() {
    int n, onesComplement;
    scanf("%d", &n);
    onesComplement = ~n;
    printf("%d\n", n, onesComplement);
    return 0;
}
