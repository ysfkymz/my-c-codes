#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
main() {
   int i,j,a,gecici;
   char c[20]="";
      a=0;
      printf("\nBir Kelime Girin: "); scanf("%s",&c);
      printf("\nGirdiginiz Kelime :%s",c);
      for(i=0;i<20;i++) {
         if(c[i]>0) a++; }
 //Yukar�daki for d�ng�s�nde girilen kelimenin ka� karakterden olu�tu�u bulunuyor.
      for(i=0;i<a;i++) {
         for(j=0;j<i;j++) {
            if(c[i]<c[j]) {
              gecici=c[i];
               c[i]=c[j];
               c[j]=gecici;
            }
         }
      }
      //Bu for d�ng�s�nde s�ralama i�lemi yap�l�yor. S�ralama yaparken ge�ici bir de�i�ken olarak gecici kullan�ld�.
      printf("\n\nKelimenin Alfabatik Sirali Sekli: ");
      for(i=0;i<a;i++)
         printf("%c",c[i]);
   getch();
}
