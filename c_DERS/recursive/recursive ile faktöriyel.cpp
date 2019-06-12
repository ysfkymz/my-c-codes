#include <stdio.h>
#include <stdlib.h>

faktoriyel(sayi){

   if(sayi==0) return 1;

   else return sayi*faktoriyel(sayi-1);

}

main() {

   int sayi,deger;

   printf("Bir Sayi Giriniz ---> "); scanf("%d",&sayi);

   deger=faktoriyel(sayi);

   printf("%d",deger);

   getch();

}
