 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
  main() {
         int sayi[10];
         int i,toplam=0;
         float ort;
         for(i=1; i<=10; i++){
               printf("%d. sayi:",i); scanf("%d",&sayi[i]);
               toplam=toplam+sayi[i];
               }
            ort=toplam/10;
            printf("sonuc: %1.1f",ort);   
         getch();
          }
