#include <stdio.h>
#include <stdlib.h>

struct Livre {
    char titre[10];
    char auteur[15];
    int annee ;
};
struct Livre create(struct Livre)
{

//struct Livre L;
    L.titre= "hard work";
    L.auteur[15] = "new calport";
    L.annee = 1995;
    return L;
};
void print_struct(struct Livre L)
{

    printf("titre est : %s",L.titre);
    printf("auteur est : %s",L.auteur);
    printf("annee est : %d", L.annee);
}


int main()
{
    struct Livre L;
    create(L);
    print_struct(L);

    return 0;
}
