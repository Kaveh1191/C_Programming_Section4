#include <stdio.h>
/*
 Kaveh Masoudinia
 section 4_exercise 1(Shopping list)
 11/22/2021(1400/08/30)
 */

int main( )
{
    int shp=1;
    int cunt=0;
    int balance;
    int aftbalance;
    int totl=0;
    int f=1;

    printf("Enter your account balance:\n");
    scanf_s("%d",&balance);

    while (shp != 0){
        printf("Enter your purchase amount:\n");
        scanf_s("%d",&shp);
        cunt++;

        totl += shp;
    }
    f=cunt-f;
    printf("The number of your purchases:%d\n",f);

    printf("The amount of your purchases:%d\n",totl);
    aftbalance=balance-totl;
    printf("Final account balance:%d\n",aftbalance);
}
