#include<stdio.h>
#include<stdlib.h>
main()
{
 char  h,k[10],t[10];
 int i,j,kontrol;
 printf("\nGizli oyun kelimenizi  girin>>");
 gets(k);

 for(i=0;k[i]!='\0';i++ ) /* tahmin i�in  kullan�lacak dizinin t�m elemanlar�na kullan�c�n�n girdi�i kelimenin uzunlu�u  kadar - i�areti konulacak  */
 {
 t[i]='_';t[i+1]='\0';
 }
 for(j=1;j<11;j++) /*  tahminci oyuncuya 10 hak veriliyor */
 {
 kontrol=1;   /* kullan�c�  t�m harfleri tutturmu� mu kontrol i�in d�ng�n�n her d�n���nde hepsini tutturmu�  gibi kontrol degi�keni 1 artt�ral�m */
 printf("%s  ",t);
 printf("\n%d. tahmin HARFINIZI girin >>  ",j);
 h=getchar();

 for(i=0;k[i]!='\0';i++ ) /* birinci oyuncunun  girdigi kelime ile tutan harf girilmis mi klavyeden*/
 {
 if  (k[i]==h)
 {
 t[i]=h;
 }
 } /* eger girilmisse t  dizisine oyuncunun girdigi harf tahmin degiskenini  aktar�r�m*/

 for(i=0;k[i]!='\0';i++ ) /* eger ki tutmayan bir tane  harf bulmussam demekki 2. oyuncu hala kelime tahmin etmemistir.  */
 {
 if  (k[i]!=t[i])
 {
 kontrol=0;break;
 } /* yaln�zca bir  tane tutmayan harf bulsa bile bu 2.oyuncunun tam tutturamadݧ�anlam�na gelir  devam eder */
 }
 if (kontrol==1)
 {
 printf("\nBravo  tum harfler tuttu :_: YOU WIN\n ");break;
 } /* eger bir �stdongu-if  yap�s�nda kontrol degikenine 0 atanmam�ssa yukar�da dongu bas�nda verilen
1  degeri duruyorudur hala degisken icinde. boylece kullan�c�n�n bilip bilmeme  olay�n� kontrol etme*/
 }
 if (kontrol==0) printf("GAME OVER YOU  LOST");
 system("pause");
}
