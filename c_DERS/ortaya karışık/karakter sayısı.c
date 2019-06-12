#include<stdio.h>
#include<conio.h>
main(){
       int sayac;
       char k;
       printf("bir karakter giriniz:");
       scanf("%c",&k);
      char s[8]={"menekse"};
     for(int i=0;i<8;i++)
     {
             if(s[i]==k)
             sayac++;
            printf("%d tane %c harfi var",sayac,k); }
            else  
            printf("hiç yok";
         getch();            
       }
