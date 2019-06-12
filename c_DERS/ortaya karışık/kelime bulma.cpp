#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       char a[50],kr[4]="bul";
       int i,sayac=0;
       gets(a);
       for(i=0; i<strlen(a); i++){
            if(a[i]==kr[0]&&a[i+1]==kr[1]&&a[i+2]==kr[2])
             sayac++; 
             }
        printf("%d ",sayac);
       getch();
       return 0;
       }
