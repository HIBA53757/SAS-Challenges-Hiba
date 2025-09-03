#include <stdio.h>
#include <stdlib.h>

int main()
{  int a,b;
   int somme;

    printf("enter deux nombre:");
    scanf("%d %d",&a,&b);
    if (a==b){
       somme= a+b;
       somme=somme*(a-1);
        printf("la somme est:%d",somme);}
    else{
        somme = a+b;
        printf("la somme est:%d",somme);}
    return 0;
}
