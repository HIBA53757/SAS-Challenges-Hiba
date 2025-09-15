#include <stdio.h>
#include<string.h>
int main() {
    char chaine[100];
    int debut = 0, fin;
    char temp;

    printf("Entrez une chaine : ");
    scanf("%99s", chaine);
    fin = 0;
    while (chaine[fin] != '\0') {
        fin++;
    }
    fin--;


    while (debut < fin) {
        temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;
        debut++;
        fin--;
    }

    printf("Chaine inversee : %s\n", chaine);

    return 0;
}

