#include<stdio.h>
#include<conio.h>
int main(void)
{
  int  tahmin;   /*  tahminimiz  */
  int    min;   /*  Tahminin alt siniri  */
  int   max;   /*  Tahminin ust siniri  */
  char  cevap;   /*  Kullanicinin cevabi  */
  min = 0;   max = 100;
  do {
    tahmin = (max - min) / 2 + min;
    printf("Tahminim %d\n",tahmin);
    printf("Buyuk / Kucuk / Esit ");
    scanf("%c",&cevap);
    if (cevap == 'B')
       max = tahmin - 1;
     else
        if (cevap == 'K')
          min = tahmin + 1;
  } while (cevap != 'E');
  getch();
  return 0;
}
