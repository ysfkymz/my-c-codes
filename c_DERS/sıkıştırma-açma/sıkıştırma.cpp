#include<conio.h>
#include<stdio.h>
main(){
           int i,a,b=0;
           for(i=0; i<4; i++){
                 printf("0-3 arsainda sayi giriniz: ");    scanf("%d" ,&a);
                 b=b<<2;
                 b=b|a; 
                 }       
       printf("sonuc:%d \n",b);
       
       for(int j=0; j<4; j++){     //acýlmýs halý
               printf("%d ",b&3);
               b=b>>2;               
               }  
          getch();
       return 0;}
