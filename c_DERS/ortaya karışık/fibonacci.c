#include<stdio.h>
#include<conio.h>
main(){ 
        int i,s,a,b,c=0;
        printf("sayi:"); scanf("%d",&s);
        a=0; b=1;
        for(i=0; i<s; i++){
              printf("%d  ",b);
              c=a+b; 
              a=b; b=c;
           
            }
                   
            getch();}
