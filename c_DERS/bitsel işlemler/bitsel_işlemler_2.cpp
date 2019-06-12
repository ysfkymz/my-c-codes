#include<stdio.h>
#include<conio.h>
main (){
     int i,s,a;
     scanf("%d",&s);
        //  0000 0011
     for(i=7; i>=0; i--)
     printf("%d",(s>>i)&1);
     if((s>>i)&1==1)
      {
       a++;              
      }
      printf("\n%d tane 1 var",a);
     getch();
     }
