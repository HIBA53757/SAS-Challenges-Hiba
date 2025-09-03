#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre a 4 chiffres : ");
    scanf("%d", &n);

    int d1 = n % 10; n /= 10;
    int d2 = n % 10; n /= 10;
    int d3 = n % 10; n /= 10;
    int d4 = n % 10;

    int inverse = d1*1000 + d2*100 + d3*10 + d4;
    printf("Nombre inverse = %d\n", inverse);

    return 0;
}
