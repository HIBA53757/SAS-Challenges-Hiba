#include <stdio.h>
#include <stdlib.h>
 typedef struct personne{
 char nom[20];
 char prenom[20];
 int age;
 }personne;


int main()
{
    int i,n;
    printf("entrer le nombre des etudiant:");
    scanf("%d",&n);
    personne p[20];
 for(i=0;i<n;i++){
     printf("entrer le nom du etudiant %d :",i+1);
     scanf(" %[^\n]s",p[i].nom);
     printf("entrer le prenom du etudiant %d :",&i+1);
     scanf(" %[^\n]s",p[i].prenom);
     printf("entrer l'age du etudiant %d :",i+1);
     scanf(" %d",p[i].age);
}
 for(i=0;i<n;i++){
    printf("le nom du person %d est: %s\n",i+1,p[i].nom);
    printf("le prenom du person %d est: %s\n",i+1,p[i].prenom);
    printf("l'age du person %d est: %d\n",i+1,p[i].age);
}


    return 0;
}
