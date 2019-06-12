#include<stdio.h>
#include<conio.h>
  void ayristir(int sure){
       int dakika,saat,saniye;
       saat=sure/3600;
       dakika=(sure%3600)/60;
       saniye=(sure%3600)%60;
       printf("%d saat %d dakika %d saniyedir",saat,dakika,saniye);
       }
       int main(){
           int sure;
           printf("sureyi giriniz");
           scanf("%d",&sure);
           ayristir(sure);
           getch();
           return 0;
           }
           
