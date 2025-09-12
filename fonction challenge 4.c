#include <stdio.h>
#include <stdlib.h>
int minimum (int a,int b){
    int min;
    if(a>b)
        min=b;
    else
        min=a;
    return min;
    }
int main()
{
    int a,b,min;
    printf("enter la valeur de A:");
    scanf("%d",&a);
    printf("enter la valeur de B:");
    scanf("%d",&b);
    min = minimum(a,b);
    printf("la valeur minimum entre A et B:%d",min);
    return 0;
}
