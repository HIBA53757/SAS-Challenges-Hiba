#include <stdio.h>
#include <stdlib.h>

int main()
{   int taille,i,somme;
        printf("entrer la taille :");
        scanf("%d",&taille);
    int T[taille];
        somme = 0;
    for (i=0;i<taille;i++){
        printf("veuiller entrer element %d :\n",i+1);
        scanf("%d",&T[i]);
        somme=somme+T[i];}
        printf("le tableau: [");
        for (i=0; i < taille;i++){
            printf("%d",T[i]);
        }
        printf("]\n");
        printf("la somme des element du tableaux est: %d",somme);
    return 0;
}
