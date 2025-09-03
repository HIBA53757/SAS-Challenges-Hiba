#include <stdio.h>

int main() {
    float longueur, largeur;
    printf("Entrez la longueur et la largeur du rectangle : ");
    scanf("%f %f", &longueur, &largeur);
    printf("Surface du rectangle = %.2f\n", longueur * largeur);
    return 0;
}
