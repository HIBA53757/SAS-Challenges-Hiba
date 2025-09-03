#include <stdio.h>
#include <stdlib.h>

int main()
{   float temp;
    printf("entrer la temperature en C:");
    scanf("%f",&temp);
     if (temp<0)
        printf("etat est solide\n");
     else if(temp<100)
        printf("etat est liquide");
     else
        printf("etat est gazeux\n");
    return 0;
}
