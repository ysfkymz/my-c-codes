 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
void dizi_yaz(int dizi[]){
     int i;
     for(i=0; i<2; i++){
     printf("dizi: %d",dizi[i]);
     }
}
  main() {
  
       int dizi[2]={2,3};
       dizi_yaz(dizi);
        getch();
          }
