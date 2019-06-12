#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int i,hak=3,sayi,tahmin;
       scanf("%d",&sayi);
       
       while(1)
       {
        scanf("%d",&tahmin);
        if(sayi>tahmin)
        printf("yukari");
        else if(sayi<tahmin)
        printf("asagi");
        else { printf("tebrikler"); break;}
        if(!hak--){
        printf("hakkiniz tukendi"); break;}
       }
       
       getch();
       return 0;
       }
