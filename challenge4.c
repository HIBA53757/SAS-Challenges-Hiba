#include <stdio.h>
#include <stdlib.h>

int main()
{   float v_km, v_m;
    printf("entrer la vitesse en km/h:");
    scanf("%f",&v_km);
    v_m=v_km*0.27778;
    printf("la vitesse en m/s est: %f",v_m);
    return 0;
}
