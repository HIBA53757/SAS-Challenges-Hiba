#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
typedef struct Etudiant {
    char nom[10];
    char prenom[10];
    int tab[5];

} Etud;

Etud Student ;
printf("entrez le nom :");
fgets(Student.nom,10,stdin);
if(Student.nom[strlen(Student.nom)] == '\n')
{
    Student.nom[strlen(Student.nom)] = '\0';
}
printf("entrez le prenom :");
fgets(Student.prenom,10,stdin);
if(Student.nom[strlen(Student.prenom)] == '\n')
{
   Student.nom[strlen(Student.prenom)] = '\0';
}

while(i < 5){

printf("entrez la note %d :",i+1);
scanf("%d", &Student.tab[i]);
i++;
}
 printf("le nom complet est : %s %s", Student.nom,Student.prenom);
 printf ("notes :");
 i = 0;
 while(i < 5)
 {

     printf("\n     %d \n",Student.tab[i] );
     i++;
 }


    return 0;
}
