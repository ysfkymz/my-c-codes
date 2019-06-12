#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main(){
       char c[250],h,b;   int i;
       printf("cumle:"); gets(c);
       printf("ter yazilisi:\n"); 
       for(i=strlen(c)-1; i>=0; i--){
             h=c[i];
             if(i%2==1){
               printf("%c",h);
             }else{
                b=toupper(h);  printf("%c",b);
                }
             }
       getch();}
