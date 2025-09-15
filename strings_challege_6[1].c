#include <stdio.h>
#include<string.h>
int main() {
    char chaine[100];
    char caractere;
    int i = 0;
    int compteur = 0;

    printf("Entrez une chaine : ");
    scanf("%99s", chaine);


    printf("Entrez le caractere a rechercher : ");
    scanf(" %c", &caractere);


    while (chaine[i] != '\0') {
        if (chaine[i] == caractere) {
            compteur++;
        }
        i++;
    }

    printf("Le caractere '%c' apparait %d fois dans la chaine.\n", caractere, compteur);

    return 0;
}
