#include <stdio.h>
#include <string.h>

int main()
{
   char stg[50];
   char stg1[50];
   puts("entrer votre premiere phrase:");
   fgets(stg,sizeof(stg),stdin);
   stg[strcspn(stg, "\n")] = '\0';
   puts("entrer votre deuxieme phrase:");
   fgets(stg1,sizeof(stg1),stdin);
   stg1[strcspn(stg1, "\n")] = '\0';
   strcat(stg," ");
   strcat (stg,stg1);
   puts(stg);
    return 0;
}
