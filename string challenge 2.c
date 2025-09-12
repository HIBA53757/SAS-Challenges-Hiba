#include <stdio.h>
#include <string.h>

int main()
{
 char strg[100];
 int i,lng=0;
     printf("entrer votre phrase:");
     fgets(strg,sizeof(strg),stdin);
     printf("%s",strg);
 for(i=0;strg[i]!='\0';i++){
     if(strg[i]!='\0'){
        lng+=1;
}    else{
         lng+=0;       }
}

     printf("\nla longeur de votre chaine est :%d",lng);
    return 0;
}
