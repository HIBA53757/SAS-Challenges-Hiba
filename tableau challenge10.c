#include <stdio.h>

int main() {

   int i,n,found,pos;
   int T[5]={7,4,2,3,5};
       printf(" enter un nombre:");
       scanf("%d",&n);
   //found=0;

   for (i=0;i<5;i++){
     if (n == T[i]){
        found =1;
        pos = i;
        // break;
        }
        }
      if (found == 1){
        printf("le nombre %d est dans le tableau du position %d",n,pos+1);}
      else{
        printf(" le nombre %d n'appartient pas au tableau\n",n);}
    return 0;
}
