#include<stdio.h>
#include<conio.h>
main (){
     int i,s;
     scanf("%d",&s);
        //  0000 0011
     for(i=7; i>=0; i--)
     printf("%d",(s>>i)&1);
     getch();
     }
