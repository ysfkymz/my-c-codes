#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char A[50],B[50],C[50];
       int  i,j,enuzun=0,sayac=0,yer=1,kr,indis=0;
       printf("metin:");  gets(A);
       for(i=0; i<= strlen(A) ; i++) {
               if(A[i]==' '){          //bo�luklar kontrol ediliyor her bo�lukta da sayac s�f�rlan�yor 
                   sayac=0;               // kelimenin yerini bulmak i�inde yer i art��r�yoruz. 
                   yer++;
                   indis=0;      //uzun kelimeyi bulmak i�in ayr�ca indis tan�mlad�k ve artt�rd�k
                     
                   }
               else 
                sayac++;
                C[indis++]=A[i];            //baka bir dizide de indisi artt�r�p metindizisine atad�k.
                
               if(sayac>enuzun) {      // en uzun kelime bulundugunda kr de�i�kenine de yeri atan�yor. 
                enuzun=sayac;     
                 kr=yer;
                 for(j=0; j<50 ; j++)    // d�g�yle kelimenn harflerini diziye atad�k.
                  B[j]=C[j];                  
                }      
        }
       printf("en uzun kelime: %d.sirada uzunlugu: %d ",kr,enuzun); 
       puts(B); 
       
       getch();
       return 0;
       }
