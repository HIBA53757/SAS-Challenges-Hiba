#include <stdio.h>
#include <stdlib.h>

int main()
{   int base,exposant,resultat,i;
    printf("entrer la base:");
    scanf("%d",&base);
    printf("entrer exposant:");
    scanf("%d",&exposant);
    resultat=1;
    if (exposant=0)
        printf("le resultat est :1");
    else
        for (i=1;i<=exposant;i++){
        resultat*=base;}
         printf("%d puissance %d = %d\n", base, exposant, resultat);
    return 0;
}
