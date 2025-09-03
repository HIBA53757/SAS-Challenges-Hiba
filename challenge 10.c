#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    const float PI = 3.14159 ;
int rayon ;
float V  ;
  printf("entrez le rayon :");
  scanf("%d",&rayon);
  V = (4.0/3.0) * PI * pow(rayon,3) ;
  printf("le volume d'une sphere est :%.2f",V);


    return 0;


}
