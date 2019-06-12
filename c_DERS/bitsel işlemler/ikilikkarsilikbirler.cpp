#include<stdio.h>
#include<conio.h>

int fonk(int sayi)
{
    int sayac =0,i;
       for(i=0;i<=7;i++)
     {
       if(sayi&1==1) sayac++; 
       sayi=sayi>>1;
     }
      return sayac;
    }

int main()
{
    int sayi;
    while(sayi!=0){
    scanf("%d",&sayi);
    printf("1=%d 0=%d",fonk(sayi),(8-fonk(sayi)));
    printf("\n");
    }
    getch();
    return 0;
    }
