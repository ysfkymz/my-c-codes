#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int tumsayilar(int sayi) {
   if(sayi==0) return 1;
   else { 
   printf("\n%d",sayi); 
   return tumsayilar(sayi-1); 
   }
}

main() {
   int sayi;
   printf("Bir Sayi Giriniz ---> "); scanf("%d",&sayi);
   tumsayilar(sayi);
   getch();

}
