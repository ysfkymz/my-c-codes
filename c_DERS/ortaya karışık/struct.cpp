#include<conio.h>
#include<stdio.h>
struct tarih {
       int yil;
       int ay;
       int gun;
       }bugun;
       main(){
              struct tarih dg;
              int yas;
              puts("dogun gununuz:(gun-ay-yil)");
              scanf("%d %d %d",&bugun.gun,&bugun.ay,&bugun.yil);
              if((bugun.ay==dg.ay && bugun.gun>=dg.gun) || (bugun.ay>dg.ay))
              yas=bugun.yil-dg.yil;
              else 
              yas=bugun.yil-dg.yil-1;
              if(yas>15 && yas<25)
              printf("%d yasindasiniz. gencsiniz. ",yas);
              else
              printf("%d yasindasiniz.",yas);
              getch();}
