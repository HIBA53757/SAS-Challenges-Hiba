#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n;
       printf("veuiller enter un nombre:");
       scanf("%d",&n);
       printf("le tableaux de multiplication de %d est:\n");
   for (i=0;i<=10;i++){
       printf(" %d x %d = %d\n",n,i,n*i);};
    return 0;
}
