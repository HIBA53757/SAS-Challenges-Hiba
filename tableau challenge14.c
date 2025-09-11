#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,n;
     float moy,som;
     printf("enter le nombre des element du tableaux:");
      scanf("%d",&n);
  while (n==0){
      printf("error!!\n entrer un nombre different de 0:");
      scanf("%d",&n); }

      float TM[n];
      for (i=0;i<n;i++){
        printf("enter %d element du tableau:",i+1);
        scanf("%f",&TM[i]);
      }
      printf("votre tableau est:[");
    for(i=0;i<n;i++){
        printf("%.2f,",TM[i]);
        }
            printf("]\n");
        som=0;
    for (i=0;i<n;i++){
         som+=TM[i];}

         moy=som/n;
         printf("la somme des elements:%.2f\n",som);
         printf("la moyenne des elements:%.2f",moy);

    return 0;
}
