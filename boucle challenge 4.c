#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i;
    printf("entrer un nombre:");
    scanf("%d",&n);
    printf("les %d premiers nombres impairs sont:\n",n);
   for (i=0;i<n;i++)
    printf("%d\n",2*i+1);
    return 0;
}
