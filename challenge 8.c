#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c,n;
    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &a, &b, &c);
    n = pow(a*b*c,1.0/3.0);
    printf("Moyenne Geometrique = %.2f\n", n);
    return 0;
}

