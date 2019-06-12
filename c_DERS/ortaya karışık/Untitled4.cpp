#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
initwindow(800,800);
setcolor(14);
line(200,200,400,200); 
setcolor(5);
line(200,200,200,400);
setcolor(1);
line(400,200,400,400);
setcolor(4);
line(200,400,400,400);
setcolor(8);
line(400,200,200,400);
setfillstyle(1,4);
//bar(400,200,200,400);
fillellipse(300,300,100,100);
getch();
closegraph();
return 0;
}
