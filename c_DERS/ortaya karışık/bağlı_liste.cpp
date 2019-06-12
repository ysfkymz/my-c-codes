#include <stdio.h>
#include <stdlib.h>
 
typedef struct _eleman
{
 struct _eleman *sornakiEleman; // bir sonraki elemaný iþaret eder.
 int veri; // yapýnýn sakladýðý veri. istenilen tipte istenildiði kadar veri eklenebilir.
} eleman;
 
typedef struct
{
 eleman *ilkEleman; // baðlý listeyi temsil eden yapý. Yalnýzca ilk elemaný iþaret ediyor.
} bagliListe;
 
bagliListe *bagliListeUret();
void elemanEkle(bagliListe*,int);
void elemanCikart(bagliListe*,int);
void listele(bagliListe*);
 
int main()
{
 bagliListe * bl = bagliListeUret(); // yeni bir baðlý liste ürettik.
 elemanEkle(bl,6); // eleman ekleyelim.
 elemanEkle(bl,34);
 elemanEkle(bl,987);
 elemanEkle(bl,5);
 elemanEkle(bl,2);
 listele(bl); // listele.
 system("pause");
 elemanCikart(bl,3); // 3. elemaný çýkart. ( ilk eleman 0'dan baþlar)
 listele(bl); // tekrar listele, farký gör.
 system("pause");
}
 
bagliListe *bagliListeUret()
{
 bagliListe* bl = (bagliListe*)malloc(sizeof(bagliListe)); // yeni bir baðlý listeyi hafýzada oluþturup ilgili adresi alýyoruz.
 bl->ilkEleman = NULL;
 return bl;
}
 
void elemanEkle(bagliListe* bl,int veri)
{
 eleman *e = (eleman*)malloc(sizeof(eleman)); // yeni bir eleman oluþturalým.
 e->sornakiEleman = NULL;
 e->veri = veri;
 eleman *son = NULL; // katarýn son elemaný.
 son = (eleman *)bl->ilkEleman; // baþlangýç elemanýný baðlý listeden alalým.
 if (son==NULL) // listemiz boþ mu?
 {
  bl->ilkEleman = e;
  return;
 }
 while(son!=NULL) // deðilse özyinelemeli olarak son elemana eriþmeye çalýþ.
 {
  if (son->sornakiEleman==NULL)
   break;
  son = (eleman*)son->sornakiEleman; // düðümler arasý atlama.
 }
 son->sornakiEleman = e; // nihayet son düðümün iþaretçisine kendi adresimizi yazýyoruz.
}
 
void listele(bagliListe* bl)
{
 eleman *e = NULL;
 e=(eleman *)bl->ilkEleman;
 int i=0;
 while(e!=NULL) // özyinelemeli listeleme fonksiyonu.
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
 if (e==NULL) // listemiz boþ mu?
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
 onceki->sornakiEleman = e->sornakiEleman; // silmek istediðimiz elemanýn bir önceki düðümü ile bir sonraki düðümü birbirine baðlýyoruz. Böylelikle aradan çekilerek silinmiþ izlenimi oluþturuluyor.
 free(e); // hafýza sýzýntýsýný önlemek için serbert býraktýðýmýz elemaný hafýzadan silmeyi unutmayalým.
 
}
