#include <stdio.h>
#include <stdlib.h>
long long  factorielle(int n) {

    if(n==0)
     return 1;
   else
    return n*factorielle(n-1);
}
int main()
{
    int n;
    long long  facto;
    printf("enter le nombre pour calculer la factorielle:");
    scanf("%d",&n);
    while(n<0){
        printf("enter un nombre positif:");
        scanf("%d",&n);
        }
    facto=factorielle(n);
    printf("la factorielle du nombre %d est :%lld",n,facto);
    return 0;
}
