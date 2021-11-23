#include <stdio.h>
/*Name:Kaveh Masoudinia
Section 4 Exercise 4
Date:11/22/2021(1400/09/01)*/


int main() {
    int napp,fa,ft,fv,tospce,aftspc;
    int txtfile=1;
    int audfile=3;
    int vdfile=1;
    char a,t,v,c;
    int pmemor=1;
   tospce=pmemor*1024;



    printf("Enter your mobile memory space in GB:\n");
    scanf("%d",&pmemor);
    printf("Enter file number and file type:\n");
    scanf("%d %c",&napp,&c);


    if(c == 'a'){
        fa=napp*audfile;
        printf("The size of your audio file:%d(MB)\n",fa);
        aftspc=tospce-fa;
        printf("The ultimate memory of your phone:%d(MB)\n",aftspc);
    }
    else if(c == 't'){
        ft=napp*txtfile;
        printf("The size of your text file:%d(MB)\n",ft);
        aftspc=tospce-ft;
        printf("The ultimate memory of your phone:%d(MB)\n",aftspc);
    }
    else if(c == 'v'){
        fv=napp*vdfile;
        printf("The size of your video file:%d(MB)\n",fv);
        aftspc=tospce-fv;
        printf("The ultimate memory of your phone:%d(MB)\n",aftspc);
    }





    return 0;
}
