#include <stdio.h>


struct Cercle {
    float rayon;
};
void afficherAire(struct Cercle c) {
    float aire = 3.14159 * c.rayon * c.rayon;
    printf("Cercle de rayon %.2f a une aire de %.2f\n", c.rayon, aire);
}

int main() {
    struct Cercle cercle1;
    printf("Entrez le rayon du cercle : ");
    scanf("%f", &cercle1.rayon);
    afficherAire(cercle1);

    return 0;
}
