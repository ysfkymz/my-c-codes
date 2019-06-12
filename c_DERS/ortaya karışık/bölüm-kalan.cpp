#include<stdio.h>
#include<conio.h>
int main() {
    int i,x,y,bolum=0,kalan=0;
    printf("2 sayi giriniz:");
    scanf("%d %d",&x,&y);
    while(x>y)
    {
       bolum++;
       x=x-y;
              
    }
       printf("sonuc %d %d dir.",bolum,x);       
    
    getch();
    return 0;}
