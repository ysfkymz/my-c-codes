 #include<stdio.h>
 #include<conio.h>
 void isim (){
      char k;
      char a[4]={"asli"};
      int sayac=0,i;
      printf("harf: "); scanf("%c",&k);
      for(i=0; i<=5; i++)
      {
               if(a[i]==k){   
         sayac++;     
         }
               }
               printf("sayisi:%d",sayac);
      }
       main() {
              isim();
              getch();
             }
