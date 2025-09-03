#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Moyenne Geometrique = %.2f\n", cbrtf(a * b * c));
    return 0;
}

