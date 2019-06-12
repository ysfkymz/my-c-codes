#include<stdio.h>
#include<conio.h>
main(){
       int sayi,kalan,d=0;
       printf("sayi:"); scanf("%d",&sayi);
       while(sayi>0){
             kalan=sayi%10;
              printf("%d\n",kalan);
              sayi=sayi-kalan;
               sayi=sayi/10;
             d+=kalan*kalan*kalan; 
             }
             printf("%d",d);
      if(d==407 || d==371 || d==370 )
      printf("eþit");
      else printf("!!!");
       getch();
       }
