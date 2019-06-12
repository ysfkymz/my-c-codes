#include<stdio.h>
#include<conio.h>
int main() {
  int a;
  printf("sayi:"); scanf("%d",&a);
  printf("sonuc= %d",((a/100)+(a%100)/10+a%10));

    getch();
    return 0;}
