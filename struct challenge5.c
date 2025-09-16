#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
int longeur = 4;
int large = 5;
};

int aire(struct Rectangle R){
return R.longeur * R.large;
}
int main()
{
    struct Rectangle Rec;
    printf(" l'aire du rectangle est : %d",aire(Rec));


    return 0;
}
