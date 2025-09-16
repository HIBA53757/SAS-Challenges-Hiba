#include <stdio.h>
#include <string.h>
struct Compte {
    char nom[20];
    float solde;
};
void ajouterMontant(struct Compte *c, float montant) {
    c->solde += montant;
}

int main() {
    struct Compte client;
     printf("Entrez le nom du client : ");
    scanf("%s", client.nom);
      printf("Entrez le solde initial : ");
    scanf("%f", &client.solde);

    float montant;
    printf("Entrez le montant à ajouter : ");
     scanf("%f", &montant);
    ajouterMontant(&client, montant);

    printf("Le solde du client %s est maintenant : %.2f\n", client.nom, client.solde);

    return 0;
}
