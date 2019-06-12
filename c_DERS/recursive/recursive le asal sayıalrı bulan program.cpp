#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int asal_bul(int sayi) {
   int i,asal;
   if (sayi==0 || sayi==1) return 1;
   else {
      for(i=2;i<(sayi/2)+1;i++) {
         if(sayi%i==0) asal=0;
      }
      if(asal!=0) printf("\n%d",sayi);
      return asal_bul(sayi-1);
  }
}
main() {
   int sayi;
   printf("Kaca Kadar Asal Sayilar Gosterilsin ---> "); scanf("%d",&sayi);
   asal_bul(sayi);
   getch();
}
