#include <stdio.h>
/*
 Kaveh Masoudinia
 section 4_exercise 2(Rock Paper Scissors)
 11/22/2021(1400/08/30)
 */
int main() {
    int scrf=0,scrs=0;
    char p,s,t,fp,sp;
    char loop='y';
    while(loop == 'y') {


    printf("Chose your move:");
    scanf(" %c %c",&fp,&sp);

    if(fp == 'p' && sp == 'p') {
        printf("Equal\n");
    }
    else if(fp == 'p' && sp == 's'){
        printf("The first player won!!!\n");
        scrf++;
    }
    else if(fp == 'p' && sp == 't'){
        printf("The second player won!!!\n");
        scrs++;
    }
    else if(fp == 's' && sp == 'p'){
        printf("The second player won!!!\n");
        scrs++;
    }
    else if(fp == 's' && sp == 's'){
        printf("Equal\n");
    }
    else if(fp == 's' && sp == 't'){
        printf("The first player won!!!\n");
        scrf++;
    }
    else if (fp == 't' && sp == 'p'){
        printf("The first player won!!!\n");
        scrf++;
    }
    else if(fp == 't' && sp == 's'){
        printf("The second player won!!!\n");
        scrs++;
    }
    else if(fp == 't' && sp == 't'){
        printf("Equal\n");
    }
    else
        printf("unknown");

    printf("First player:%d\n",scrf);
    printf("Second player:%d\n",scrs);
        if(scrf==3) {
            printf("The first player won!!!\n");
            printf("Score:%d",scrf);
            return 0;
        }
        if(scrs==3) {
            printf("The second player won!!!\n");
            printf("Score:%d",scrs);
            return 0;
        }
        printf("do you want to play again? (y/n) ");
        scanf(" %c", &loop);
        if(loop != 'y')
            loop='n';

    }

    return 0;
}
