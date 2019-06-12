#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char A[50],B[50],C[50];
       int  i,j,enuzun=0,sayac=0,yer=1,kr,indis=0;
       printf("metin:");  gets(A);
       for(i=0; i<= strlen(A) ; i++) {
               if(A[i]==' '){          //boþluklar kontrol ediliyor her boþlukta da sayac sýfýrlanýyor 
                   sayac=0;               // kelimenin yerini bulmak içinde yer i artýýrýyoruz. 
                   yer++;
                   indis=0;      //uzun kelimeyi bulmak için ayrýca indis tanýmladýk ve arttýrdýk
                     
                   }
               else 
                sayac++;
                C[indis++]=A[i];            //baka bir dizide de indisi arttýrýp metindizisine atadýk.
                
               if(sayac>enuzun) {      // en uzun kelime bulundugunda kr deðiþkenine de yeri atanýyor. 
                enuzun=sayac;     
                 kr=yer;
                 for(j=0; j<50 ; j++)    // dögüyle kelimenn harflerini diziye atadýk.
                  B[j]=C[j];                  
                }      
        }
       printf("en uzun kelime: %d.sirada uzunlugu: %d ",kr,enuzun); 
       puts(B); 
       
       getch();
       return 0;
       }
