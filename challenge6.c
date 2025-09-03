#include <stdio.h>
#include <stdlib.h>

int main()
{   float a,b,somme,division,multi,soustr;
    printf("entrer deux nombre:");
    scanf("%f %f",&a,&b);
    printf("la somme des deux nombre est:%.2f\n",a+b);
    printf("la division des deux nombre est:%.2f\n",a/b);
    printf("la multiplication des deux nombre est:%.2f\n",a*b);
    printf("la soustraction des deux nombre est:%.2f\n",a-b);
    return 0;
}
