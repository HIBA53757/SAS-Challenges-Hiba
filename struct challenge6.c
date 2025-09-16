#include <stdio.h>
#include <string.h>


struct Produit {
     char nom[20];
    float prix;
int quantite;
};

void afficherProduit(struct Produit p) {
    printf("Nom : %s, Prix : %.2f, Quantité : %d\n", p.nom, p.prix, p.quantite);
}

int main() {

    struct Produit produits[3];


    strcpy(produits[0].nom, "Pommes");


    produits[0].prix = 2.5;
     produits[0].quantite = 10;
strcpy(produits[1].nom, "Lait");
    produits[1].prix = 1.2;
         produits[1].quantite = 20;
  strcpy(produits[2].nom, "Pain");
        produits[2].prix = 1.0;
    produits[2].quantite = 15;


    for(int i = 0; i < 3; i++) {
        afficherProduit(produits[i]);
    }

    return 0;
}
