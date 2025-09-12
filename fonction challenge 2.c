#include <stdio.h>
#include <stdlib.h>
int produit (int a,int b){
    int p=a*b;
    return p;
}
int main()
{   int p,a,b;
    printf("entrer la valeur de A:");
    scanf("%d",&a);
    printf("\nentrer la valeur de B:");
    scanf("%d",&b);
    p= produit(a,b);
    printf("\nle produit du A et B est:%d",p);
    return 0;
}
