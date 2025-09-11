#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,n;
     int T[5]={8,6,5,4,3};
    // int
     printf("tableau origine est:[");
     for(i=0;i<5;i++){
        printf("%d,",T[i]);
    }   printf("]\n\n");
   // T[5]=
     for(i=0;i<5;i++){
        printf("enter le noveau element %d du tableau:",i+1);
        scanf("%d",&T[i]);
}
         printf("\nle noveau tableau est:[");
     for(i=0;i<5;i++){
        printf("%d,",T[i]);
    }   printf("]\n\n");

    return 0;
}
