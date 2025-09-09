#include <stdio.h>
#include <stdlib.h>

int main()
{ int i , min , taille;
    printf("enterer la taille:");
    scanf("%d",&taille);
  int T[taille];
  for(i=0;i<taille;i++){
    printf("vueiller entrer l'element %d :\n",i+1);
    scanf("%d",&T[i]);}
    min=T[0];
    for (i=0;i<taille;i++){
    if (min>T[i]) {
        min=T[i];
    }}
    for (i=0;i<taille;i++){
       printf("l'element %d du tableau est: %d\n",i+1,T[i]);
       }
      printf("le minimum est:%d",min);
    return 0;
}
