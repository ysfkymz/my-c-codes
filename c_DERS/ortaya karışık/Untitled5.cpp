#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    initwindow(700,700);
    int dizi[22]={100,0,80,100,0,100,50,150,0,200,100,160,100,160,200,200,150,150,200,100,120,100};
    drawpoly(11,dizi);
    

getch();
closegraph();
return 0;
}
/* yýldýz :
          int poly[22]={395,250,418,257,418,280,431,261,454,
269,440,250,453,231,431,238,417,220,417,243,395,250};
fillpoly(11,poly);  */
/*
üçgen:
 
    int dizi[6]={100,0,0,200,200,200};
    fillpoly(3,dizi);
    
    
kelebek:
 int dizi[8]={500,0,0,500,1000,500,500,1000};
    fillpoly(4,dizi);
    
    
    deltoid:
    int dizi[8]={500,0,0,500,500,1000,1000,500};
    fillpoly(4,dizi);
    
    
    
    beþgen:
    int dizi[10]={100,0,0,100,50,200,150,200,200,100};
    fillpoly(5,dizi);
    
    altýgen:
     int dizi[12]={100,0,0,100,100,200,200,200,300,100,200,0};
    fillpoly(6,dizi);       
*/
