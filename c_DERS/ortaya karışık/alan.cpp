#include<stdio.h>
#include<conio.h>
main(){
       int a,b,c,sayi;
       int d;
       for(a=1; a<=9; a++) 
       for(b=0; b<=9; b++)
       for(c=0; c<=9; c++){
       sayi=100*a + 10*b + c;
       d=a*a*a + b*b*b + c*c*c;  
       if(sayi==d)
       printf("%d\n",sayi);}
       getch();
       }
