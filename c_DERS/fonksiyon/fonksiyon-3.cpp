 #include<stdio.h>
 #include<conio.h>
 int sayi(int a, int b){
      int i,sonuc=1;
     for(i=1; i<=b; i++ ){
            sonuc= a*sonuc;
           }
         return sonuc;
     }
   main() {
          
        printf("%d",sayi(2,3));
           getch();
             }
