#include<stdio.h>
#include<conio.h>
int main() {
    int i,x,y,toplam=0;
    printf("2 sayi giriniz:");
    scanf("%d %d",&x,&y);
    for(i=0; i<x; i++){
     toplam=toplam+y;        
                 }
    printf("sonuc=%d",toplam);
    getch();
    return 0;}
