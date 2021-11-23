#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Section 4 Exercise 3
 Date:11/22/2021(1400/09/01)

  */


int main() {
    int pnum,phonfl,cnum,internet;
    int itnetfl;
    char i,d,t;
    printf("Enter your number:\n");
    scanf("%d",&pnum);

    printf("Enter your call type:\n");
    scanf(" %c",&t);

    printf("Number of phone calls and using Internet:\n");
    scanf("%d %d",&cnum,&internet);


    if(t == 'i'){
        phonfl=cnum*4000;
        itnetfl=internet*1300;
        printf("telephone bill:%d\n",phonfl);
        printf("Internet bill:%d\n",itnetfl);
    }
    else if(t == 'd'){
        phonfl=cnum*150;
        itnetfl=internet*800;
        printf("telephone bill:%d\n",phonfl);
        printf("Internet bill:%d\n",itnetfl);
    }
    printf("Your phone and internet bill:%d %d\n",phonfl,itnetfl);

    return 0;
}
