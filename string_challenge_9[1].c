#include <stdio.h>
#include<string.h>
int main() {
    char chaine[100], resultat[100];
    int i = 0, j = 0;

    printf("Entrez une chaine : ");
    scanf("%99[^\n]", chaine);

    while (chaine[i] != '\0') {
        if (chaine[i] != ' ') {
            resultat[j] = chaine[i];
            j++;
        }
        i++;
    }

    resultat[j] = '\0';

    printf("Chaine sans espaces : %s\n", resultat);

    return 0;
}
