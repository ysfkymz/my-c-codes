#include<stdio.h>
#include<conio.h>

  int elemantoplam(int dizi[][3]){
      int i,j,toplam=0;
      for(i=0;i<3;i++){
                       for(j=0;j<3;j++){
                       toplam=toplam+dizi[i][j];
                       }}
                       return toplam;
                       }
                       
      int main(){
      int dizi[3][3],i,j;
          for(i=0;i<3;i++){
              for(j=0;j<3;j++){
              scanf("%d",&dizi[i][j]);
              }
          }
            printf("sayi toplami %d dir",elemantoplam(dizi));
            getch();
            return 0;
      }  
      
