#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
main(){
       initwindow(800,800);
       int x1,x2,y1,y2,renk;
       int driver,errcode=0,sekilsay=0,beklesure=100;
       if(errcode!=0){
            printf("graph error!!!!! %d",errcode);
            exit(1);
            }
       srand(time(NULL));
       while(sekilsay<100) {
       x1=rand()% getmaxx()+1;
       x2=rand()% getmaxx()+1;
       y1=rand()% getmaxx()+1;
       y2=rand()% getmaxx()+1;
       renk=rand()%16 +1;
       setcolor(renk);
       rectangle(x1,y1,x2,y2);
       delay(beklesure);
       sekilsay++;
       }
       getch();
       closegraph();
       return 0;
       }
