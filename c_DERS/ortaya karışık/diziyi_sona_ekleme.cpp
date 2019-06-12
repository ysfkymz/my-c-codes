#include<conio.h>
#include<stdio.h>
#include<string.h>
main(){
       char a[20],b[20],s[20];
       printf("metin_1: ");  scanf("%s",&a);
       printf("matin_2: ");  scanf("%s",&b);
       for(int i=0; i<strlen(a); i++){
               s[i]=a[i];
               } 
               int sayac=0;
               s[strlen(a)]=3;
                for(int i=strlen(a)+1; i<strlen(a)+3+strlen(b); i++){
                  s[i]=b[sayac++];
                        }
       for(int i=0; i<strlen(a)+1+strlen(b); i++){
               printf("%c",s[i]); }
              
         getch();
       return 0;
       }
