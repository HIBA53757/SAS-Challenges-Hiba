#include <stdio.h>
#include <stdlib.h>
 int somme(int a,int b){
     int s=a+b;
     return s;
 }


int main()
{    int a,b;
     int s;
     printf("entrer la valeur de A:");
     scanf("%d",&a);
     printf("entrer la valeur de B:");
     scanf("%d",&b);
     s = somme(a,b);
     printf("la somme est : %d",s);

    return 0;
}
