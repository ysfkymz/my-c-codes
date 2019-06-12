#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
    char sehir[][20]={"adana","afyonkarahisar","amasya","ankara","antalya","artvin","bilecik","bitlis","bolu","burdur",
    "bursa","denizli","edirne","erzincan","erzurum","gaziantep","giresun","hakkari","hatay","mersin",
    "istanbul","izmir","kars","kastamonu","kayseri","kocaeli","konya","malatya","manisa","mardin",
    "ordu","rize","sakarya","samsun","siirt","sinop","sivas","tokat","trabzon","tunceli",
    "van","yozgat","zonguldak","aksaray","bayburt","karaman","batman","ardahan","yalova","kilis","osmaniye"};
    char harf;
    char toplam[15]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
    int i,uzunluk=0,x,y=0,a=0,b=0;
    srand(time(NULL));
    printf("Bir sehir giriniz:");
    x=0+rand()%50;
    uzunluk=strlen(sehir[x]);
    for(i=0;i<uzunluk;i++)
    {
      printf(" __ ");
    }
    printf("\n");
    while(y<5){
     printf("\nBir harf: ");
     fflush(stdin);
     scanf("%c",&harf);
     for(i=0;i<uzunluk;i++)
               {
               if(harf==sehir[x][i])
               {
               toplam[i]=harf;
               a++;
               b++;
               }
           }
               if(a==0)
               {
              y++;
               }
               if(a!=0)
               {
                  for(i=0;i<uzunluk;i++)
                  {
                   if(toplam[i]!='*')
                   {
                   printf("%c ",toplam[i]);
                   }
                   else
                   {
                   printf(" __ ");
                   }
                  }
               }
               else
               {
                   printf("%d. hakkinizi doldurdunuz\n",y);
                   if(y!=5)
                   {
                   printf("%d hakkiniz kaldi\n",5-y);
                   }
                   if(y==5)
                   {
                   printf("Oyun bitti!!!\n");
              printf("Dogru cevap '%s' olacakti\n",sehir[x]);
                   }
               }
               if(b==uzunluk)
               {
               printf("\nTEBRIKLER !!!");
               break;
               }
               a=0;
               printf("\n");
    }
    printf("\n");
    //system("pause");
    getch();
    return(0);
    }
