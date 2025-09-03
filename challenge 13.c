#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier decimal : ");
    scanf("%d", &n);
    printf("Binaire = ");
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit || i < 31)
            printf("%d", bit);
    }
    printf("\n");
    printf("Hexadecimal = %X\n", n);

    return 0;
}

