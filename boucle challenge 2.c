#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,facto;
       printf("entrer un nombre:");
       scanf("%d",&n);
       facto = 1;
    for ( i=1 ; i<= n ; i++){
      facto = facto*i;}
      printf("Factorielle du nombre %d est:%d",n,facto);
    return 0;
}
