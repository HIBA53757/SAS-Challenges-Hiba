#include <stdio.h>
#include <stdlib.h>
//void saisir
int main()
{   char nom[500];
    int id[500];
    int age[500];
    int nbr_etudiants;
    char prenom[100];
    int moyenne[50];
         printf("enter le nombre des etudiant de votre universite:");
         scanf("%d",&nbr_etudiants);
    int T_etudiant[nbr_etudiants];
    int i,j;
 for(i=0;i<nbr_etudiants;i++){
        printf("entrer ID d'etudiant %d:",i+1);
        scanf("%d",&id[i]);
       }

 for(i=0;i<nbr_etudiants;i++){
        printf("entrer nom d'etudiant %d:",i+1);
        scanf("%s",&nom[i]);
       }
 for(i=0;i<nbr_etudiants;i++){
        printf("entrer prenom d'etudiant %d:",i+1);
        scanf("%s",&prenom[i]);
       }
 for(i=0;i<nbr_etudiants;i++){
        printf("entrer âge d'etudiant %d:",i+1);
        scanf("%d",&age[i]);
       }
  for(i=0;i<nbr_etudiants;i++){
        printf("entrer la moyenne d'etudiant %d:",i+1);
        scanf("%d",&moyenne[i]);

     printf("\nles IDs des etudient en ordre sont:[");
            for(i=0;i<nbr_etudiants;i++){
              printf("%d,",id[i]);}
            printf("]\n");

    printf("\nles noms des etudient en ordre sont:[");
            for(i=0;i<nbr_etudiants;i++){
              printf("%s,",nom[i]);}
            printf("]\n");

    printf("\nles prenoms des etudient en ordre sont:[");
            for(i=0;i<nbr_etudiants;i++){
              printf("%s,",prenom[i]);}
            printf("]\n");

     printf("\nles ages des etudient en ordre sont:[");
            for(i=0;i<nbr_etudiants;i++){
              printf("%d,",age[i]);}
            printf("]\n");

     printf("\nles moyenne des etudient en ordre sont:[");
            for(i=0;i<nbr_etudiants;i++){
              printf("%d,",moyenne[i]);}
            printf("]\n");

    return 0;
}}
