#include<stdio.h>
#include<conio.h>

void carpim(int sayi){
    int i;
    if(sayi<=10){
    for(i=1;i<=10;i++)
    printf("%3d ",i*sayi);
    printf("\n");
    carpim(sayi+1);
}
    }

int main()
{
    carpim(1);
    
    getch();
    return 0;
    }
