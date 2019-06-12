#include<stdio.h>
#include<conio.h>
#include<conio.h>
void tablo(int a){
     int i=0;
     printf("%d icin çarpim tablosu\n",a);
     for(i=1; i<=10; i++)
     printf("%d * %d = %d\n",a,i,(a*i));
     }
main(){
       int a;
       printf("carpim tablosu:\n");
       printf("bir sayi giriniz:"); scanf("%d",&a);
          tablo(a);    
        getch();       
       }
