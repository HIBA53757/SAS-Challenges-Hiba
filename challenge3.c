#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,yards;

    printf("entrer la distance en km:");
    scanf("%f",&km);
    yards=km*1093.61;
    printf("la distance yards est: %f",yards);
    return 0;
}
