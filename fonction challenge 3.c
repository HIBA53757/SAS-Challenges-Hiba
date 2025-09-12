#include <stdio.h>
#include <stdlib.h>
int maximum(int a,int b){
    int max;
    if(a>b)
        max=a;
    else
        max=b;
    return max;
}
int main()
{  int max,a,b;
  printf("enter la valeur de A:");
  scanf("%d",&a);
  printf("enter la valeur de B:");
  scanf("%d",&b);
  max = maximum(a,b);
  printf("le maximum est:%d",max);

    return 0;
}
