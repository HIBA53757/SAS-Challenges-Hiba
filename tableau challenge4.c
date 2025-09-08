#include <stdio.h>
#include <stdlib.h>

int main()
{  int i,taille;
   printf("enterer la taille du tableau:");
   scanf("%d",&taille);
   int T[taille];
   for (i=0;i<taille;i++){
      printf("enter l'element %d du votre tableau:",i+1);
      scanf("%d",&T[i]);
   }
   int max=T[0];
   for (i=0;i<taille;i++)
   if (T[i]>max){
      max=T[i];
      }
      printf("l'element le plus grand du tableau est : %d",max);
    return 0;
}
