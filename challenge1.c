
#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    char nom[35] ;
    char prenom[35];
    char  sexe[35];
   char adresse_email[100];

     printf("entrer votre prenom:");
    scanf("%s",prenom);
    printf("entrer votre nom:");
    scanf("%s",nom);
    printf("entrer votre age:");
    scanf("%d",&age);
    printf("entrer votre sexe:");
    scanf("%s",sexe);
    printf("entrer votre Adresse email:");
    scanf("%s",adresse_email);
printf("votre prenom est:%s \nvotre nom est:%s \nvotre age est:%d \nvotre sexe est:%s \nvotre adresse email est:%s",prenom,nom,age,sexe,adresse_email);
    return 0;
}
