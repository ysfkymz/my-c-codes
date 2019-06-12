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
 //Yukarýdaki for döngüsünde girilen kelimenin kaç karakterden oluþtuðu bulunuyor.
      for(i=0;i<a;i++) {
         for(j=0;j<i;j++) {
            if(c[i]<c[j]) {
              gecici=c[i];
               c[i]=c[j];
               c[j]=gecici;
            }
         }
      }
      //Bu for döngüsünde sýralama iþlemi yapýlýyor. Sýralama yaparken geçici bir deðiþken olarak gecici kullanýldý.
      printf("\n\nKelimenin Alfabatik Sirali Sekli: ");
      for(i=0;i<a;i++)
         printf("%c",c[i]);
   getch();
}
