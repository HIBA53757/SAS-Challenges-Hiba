#include <stdio.h>
#include<string.h>
int main() {
    char chaine[100];
    int i = 0;

    printf("Entrez une chaine : ");
    scanf("%99s", chaine);

    while (chaine[i] != '\0') {

        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = chaine[i] - 'A' + 'a';
        }
        i++;
    }

    printf("Chaine en minuscules : %s\n", chaine);

    return 0;
}
