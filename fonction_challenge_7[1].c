#include <stdio.h>
void inverser_chaine(char str[]) {
    int debut = 0;
    int fin = 0;

    while (str[fin] != '\0') {
        fin++;
    }
    fin--;

    while (debut < fin) {
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;

        debut++;
        fin--;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    scanf("%99s", chaine);

    inverser_chaine(chaine);

    printf("Chaine inversee : %s\n", chaine);

    return 0;
}
