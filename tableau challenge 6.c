#include <stdio.h>

int main()
{
    int i,f;
    int T[5];
    for (i=0;i<5;i++){
     printf("enter l'element %d du tableau:\n",i+1);
     scanf("%d",&T[i]);
     }
     printf("veuiller entrer le facteur de multiplication:\n");
     scanf("%d",&f);
     int TR[5];
     for(i=0;i<5;i++){
        TR[i]=T[i]*f;
     }
     for (i=0;i<5;i++)
     printf("%d l'�l�ment du tableau multiplie par le facteur donn� est:%d\n",i+1,TR[i]);


return 0;
}
