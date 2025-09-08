#include <stdio.h>
#include <stdlib.h>

int main()
{    char word[5]={'l','i','o','n','%0'};
     char hidden[5]={'-','-','-','-','-','%0'};
     char enter[5];
     int i;
        printf("in this game you have to guess the hideen word(- - - - -)\n");
        printf("let's start\n");

        printf("enter your caracter:");
        scanf("%c",&enter[i]);

    if (enter[i] = hidden[i])
        hidden[i]= enter[i]
        printf("%c\n",&hidden[i]);
    else
        printf("wrong answer");

        printf("enter  other  caracter:");
        scanf("%c",&enter[i]);
    for(i=0;i<=5;i++)
    if (hidden[i] = enter[i]){
        hideden [i]=
        printf("%c\n",hidden[i]);}
    else
        printf("wrong answer");

    return 0;
}
