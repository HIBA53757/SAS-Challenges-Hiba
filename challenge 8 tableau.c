#include <stdio.h>
int main()
    {
    int i,n;
    int T[5]={2,5,6,4,7};
    int TC[5];
     for(i=0;i<5;i++){
        printf("l'element %d du tableau principale est: %d\n",i+1,T[i]);}
    for(i=0;i<5;i++){
        TC[i]=T[i];
         printf("l'element %d du tableau copie est: %d\n",i+1,TC[i]);
    }


    return 0;
}
