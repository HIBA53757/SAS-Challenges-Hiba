#include <stdio.h>
#include<string.h>
int main() {
    char chaine[100];
    int i = 0;

    printf("Entrez une chaine : ");
    scanf("%99s", chaine);


    while (chaine[i] != '\0') {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - 'a' + 'A';
        }
        i++;
    }

    printf("Chaine en majuscules : %s\n", chaine);

    return 0;
}
