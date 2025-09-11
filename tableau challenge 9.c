#include <stdio.h>
int main()
    {
     int i;
     int T[5]={4,2,8,6,3};
     int TI[5];
    printf("le tableaux origine est:\n[");
    for (i=0;i<5;i++){
        printf("%d,",T[i]);
     }
         printf("]\n");
         printf("le tableaux copie est:\n[");
       for(i=0;i<5;i++){
         TI[i]=T[4-i];
         printf("%d,",TI[i]);
        }
        printf("]\n");

    return 0;
}
