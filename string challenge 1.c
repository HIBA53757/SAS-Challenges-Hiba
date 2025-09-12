#include <stdio.h>
#include <string.h>

int main() {
char stg[100];
    printf("enter votre phrase:");
    fgets(stg, sizeof(stg), stdin);
printf("%s",stg);
    return 0;
}
