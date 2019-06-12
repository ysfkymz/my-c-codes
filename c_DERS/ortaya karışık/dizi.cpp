#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
   int i;
   char dizi[10],kr;
   gets(dizi);
   scanf("%c",&kr);
   for(i=0; i<strlen(dizi); i++){
         if(dizi[i]==kr){
              dizi[i]=' ';
              }
         }
   puts(dizi);
    getch();
    return 0;}
