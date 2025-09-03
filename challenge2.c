#include <stdio.h>
#include <stdlib.h>

int main()
{   float Celsius, kelvin;
    printf("enter la temperature en degrés Celsius:");
    scanf("%f",&Celsius);
    kelvin=Celsius+273.15;
    printf("la temperatues en kelvin est:%f",kelvin);
    return 0;
}
