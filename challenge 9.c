#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2;
    printf("Entrez les coordonnees du premier point (x y z) : ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Entrez les coordonnees du deuxieme point (x y z) : ");
    scanf("%f %f %f", &x2, &y2, &z2);
    printf("Distance = %.2f\n", sqrtf((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1)));
    return 0;
}
