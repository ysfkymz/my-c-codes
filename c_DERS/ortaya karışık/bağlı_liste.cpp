#include <stdio.h>
#include <stdlib.h>
 
typedef struct _eleman
{
 struct _eleman *sornakiEleman; // bir sonraki eleman� i�aret eder.
 int veri; // yap�n�n saklad��� veri. istenilen tipte istenildi�i kadar veri eklenebilir.
} eleman;
 
typedef struct
{
 eleman *ilkEleman; // ba�l� listeyi temsil eden yap�. Yaln�zca ilk eleman� i�aret ediyor.
} bagliListe;
 
bagliListe *bagliListeUret();
void elemanEkle(bagliListe*,int);
void elemanCikart(bagliListe*,int);
void listele(bagliListe*);
 
int main()
{
 bagliListe * bl = bagliListeUret(); // yeni bir ba�l� liste �rettik.
 elemanEkle(bl,6); // eleman ekleyelim.
 elemanEkle(bl,34);
 elemanEkle(bl,987);
 elemanEkle(bl,5);
 elemanEkle(bl,2);
 listele(bl); // listele.
 system("pause");
 elemanCikart(bl,3); // 3. eleman� ��kart. ( ilk eleman 0'dan ba�lar)
 listele(bl); // tekrar listele, fark� g�r.
 system("pause");
}
 
bagliListe *bagliListeUret()
{
 bagliListe* bl = (bagliListe*)malloc(sizeof(bagliListe)); // yeni bir ba�l� listeyi haf�zada olu�turup ilgili adresi al�yoruz.
 bl->ilkEleman = NULL;
 return bl;
}
 
void elemanEkle(bagliListe* bl,int veri)
{
 eleman *e = (eleman*)malloc(sizeof(eleman)); // yeni bir eleman olu�tural�m.
 e->sornakiEleman = NULL;
 e->veri = veri;
 eleman *son = NULL; // katar�n son eleman�.
 son = (eleman *)bl->ilkEleman; // ba�lang�� eleman�n� ba�l� listeden alal�m.
 if (son==NULL) // listemiz bo� mu?
 {
  bl->ilkEleman = e;
  return;
 }
 while(son!=NULL) // de�ilse �zyinelemeli olarak son elemana eri�meye �al��.
 {
  if (son->sornakiEleman==NULL)
   break;
  son = (eleman*)son->sornakiEleman; // d���mler aras� atlama.
 }
 son->sornakiEleman = e; // nihayet son d���m�n i�aret�isine kendi adresimizi yaz�yoruz.
}
 
void listele(bagliListe* bl)
{
 eleman *e = NULL;
 e=(eleman *)bl->ilkEleman;
 int i=0;
 while(e!=NULL) // �zyinelemeli listeleme fonksiyonu.
 {
  printf("%i. eleman verisi = %i\n",i++,e->veri);
  e = (eleman*) e->sornakiEleman;
 }
}
void elemanCikart(bagliListe * bl, int sira)
{
 eleman *e = NULL;
 e=(eleman *)bl->ilkEleman;
 eleman *onceki = NULL;
 int i=0;
 if (e==NULL) // listemiz bo� mu?
 {
  printf("Liste bos oldugu icin cikartma yapilamiyor!\n");
  return;
 }
 while(e!=NULL)
 {
  if (i==sira)
   break;
  i++;
  onceki = e;
  e = (eleman*) e->sornakiEleman; 
 }
 onceki->sornakiEleman = e->sornakiEleman; // silmek istedi�imiz eleman�n bir �nceki d���m� ile bir sonraki d���m� birbirine ba�l�yoruz. B�ylelikle aradan �ekilerek silinmi� izlenimi olu�turuluyor.
 free(e); // haf�za s�z�nt�s�n� �nlemek i�in serbert b�rakt���m�z eleman� haf�zadan silmeyi unutmayal�m.
 
}
