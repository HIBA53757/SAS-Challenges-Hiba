#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);
    float volume = (4.0/3.0) * M_PI * powf(r, 3);
    printf("Volume de la sphere = %.2f\n", volume);
    return 0;
}
