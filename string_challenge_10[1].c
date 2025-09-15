#include <stdio.h>

int main() {
    char chaine[100], sousChaine[100];
    int i, j;
    int trouve = 0;

    printf("Entrez la chaine principale : ");
    scanf("%99s", chaine);
printf("Entrez la sous-chaine : ");
    scanf("%99s", sousChaine);


    for (i = 0; chaine[i] != '\0'; i++) {
        j = 0;

while (sousChaine[j] != '\0' && chaine[i + j] == sousChaine[j]) {
            j++;
        }

        if (sousChaine[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("La sous-chaine '%s' existe dans la chaine.\n", sousChaine);
    } else {
        printf("La sous-chaine '%s' n'existe pas dans la chaine.\n", sousChaine);
    }

    return 0;
}
