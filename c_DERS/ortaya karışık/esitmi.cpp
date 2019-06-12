#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
    int i,j,u=0;
    char dizi[20];
    gets(dizi); 
    for(i=0; i<strlen(dizi); i++){
         if(dizi[i]!=dizi[strlen(dizi)-1-i]){
              u=1;
              }  
             }
    if(u==1)printf("esit degil");
    else printf("esit");
    getch();
    return 0;}
