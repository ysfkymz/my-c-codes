
 //faktöriyel

 #include<stdio.h>
 #include<conio.h>
 int sayi(int a){
     int sonuc=1;
     int i;
  for(i=1; i<=a; i++){
          sonuc=sonuc*i;
          }
  return sonuc;     
  }
  
 main() {
        int a;
        printf("a degeri:"); scanf("%d",&a);
        printf("%d",sayi(a));
          getch();
 }
