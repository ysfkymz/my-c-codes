#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
    int i;
    char dizi[20];
    gets(dizi); 
    int sayac=0;
    for(i=0; i<=20; i++){
          if(dizi[i]!='\0')
          sayac++;
          else break;
          }
    for(i=sayac-1; i>=0; i--){
        printf("%c",dizi[i]);
          }
    getch();
    return 0;}
