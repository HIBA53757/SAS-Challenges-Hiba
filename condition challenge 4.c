#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{   float a,b,c;
    float delta;
    float x,x1;
    printf("enter trois nombre:");
    scanf("%f %f %f",&a,&b,&c);
    delta= pow(b,2)-(4*a*c);
    printf("la valeur du discriminant est:%.2f",delta);
    if (delta>0){
        printf("Deux solutions r�elles distinctes ");

        }
    else if (delta=0){
        printf("Une solution double");

        }
    else
        printf("Pas de solution r�elle");
    return 0;
}
