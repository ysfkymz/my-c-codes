#include<stdio.h>
#include<stdlib.h>
main()
{
 char  h,k[10],t[10];
 int i,j,kontrol;
 printf("\nGizli oyun kelimenizi  girin>>");
 gets(k);

 for(i=0;k[i]!='\0';i++ ) /* tahmin için  kullanılacak dizinin tüm elemanlarına kullanıcının girdiği kelimenin uzunluğu  kadar - işareti konulacak  */
 {
 t[i]='_';t[i+1]='\0';
 }
 for(j=1;j<11;j++) /*  tahminci oyuncuya 10 hak veriliyor */
 {
 kontrol=1;   /* kullanıcı  tüm harfleri tutturmuş mu kontrol için döngünün her dönüşünde hepsini tutturmuş  gibi kontrol degişkeni 1 arttıralım */
 printf("%s  ",t);
 printf("\n%d. tahmin HARFINIZI girin >>  ",j);
 h=getchar();

 for(i=0;k[i]!='\0';i++ ) /* birinci oyuncunun  girdigi kelime ile tutan harf girilmis mi klavyeden*/
 {
 if  (k[i]==h)
 {
 t[i]=h;
 }
 } /* eger girilmisse t  dizisine oyuncunun girdigi harf tahmin degiskenini  aktarİrİm*/

 for(i=0;k[i]!='\0';i++ ) /* eger ki tutmayan bir tane  harf bulmussam demekki 2. oyuncu hala kelime tahmin etmemistir.  */
 {
 if  (k[i]!=t[i])
 {
 kontrol=0;break;
 } /* yalnızca bir  tane tutmayan harf bulsa bile bu 2.oyuncunun tam tutturamadİ§İanlamİna gelir  devam eder */
 }
 if (kontrol==1)
 {
 printf("\nBravo  tum harfler tuttu :_: YOU WIN\n ");break;
 } /* eger bir üstdongu-if  yapİsİnda kontrol degikenine 0 atanmamİssa yukarİda dongu basİnda verilen
1  degeri duruyorudur hala degisken icinde. boylece kullanİcİnİn bilip bilmeme  olayİnİ kontrol etme*/
 }
 if (kontrol==0) printf("GAME OVER YOU  LOST");
 system("pause");
}
