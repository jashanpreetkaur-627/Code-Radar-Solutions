#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel.\n", ch);
            break;
        default:
            printf("Consonant\n", ch);
    }

    return 0;
}
