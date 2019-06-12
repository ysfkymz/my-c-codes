#include<stdio.h>
#include<conio.h>
main(){
       int sayi=0,rakam=0,toplam=0;
       printf("sayi:"); scanf("%d",&sayi);
       while(sayi>0){
               rakam=sayi%10;
               toplam=toplam+rakam;
               sayi=sayi/10;
               }
               printf("rakamlar toplami:%d",toplam);
       getch();       
       }
