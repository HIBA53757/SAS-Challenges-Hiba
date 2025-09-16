#include <stdio.h>
#include <string.h>


struct Employe {
     char nom[20];
    float salaire;
};


void afficherEmploye(struct Employe e) {
    printf("Nom : %s, Salaire : %.2f\n", e.nom, e.salaire);
}

int main() {
    int n;

    printf("Combien d'employés voulez-vous saisir ? ");
    scanf("%d", &n);

    struct Employe employes[100];
    for(int i = 0; i < n; i++) {
        printf("Entrez le nom de l'employé %d : ", i + 1);
        scanf("%s", employes[i].nom);
        printf("Entrez le salaire de %s : ", employes[i].nom);
        scanf("%f", &employes[i].salaire);
    }
    printf("\nListe des employés :\n");
    for(int i = 0; i < n; i++) {
        afficherEmploye(employes[i]);
    }

    return 0;
}
