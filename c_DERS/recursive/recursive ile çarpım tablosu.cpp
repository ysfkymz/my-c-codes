#include <stdio.h>
#include <conio.h>

int tablo(int x) {
   int i;
   if(x<10) {
      for(i=1;i<11;i++) printf("%d %d\n",x*i);
       tablo(x+1);
   }
   printf("%d ",x);
   return 1;
}

int main() {
   int x=1;
   tablo(x);
   getch();

}
