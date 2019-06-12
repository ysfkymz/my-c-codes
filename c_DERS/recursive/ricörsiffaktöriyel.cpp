#include<stdio.h>
#include<conio.h>

int fak(int deger)
{
    if(deger==0)
    return 1;
    else
    return deger*fak(deger-1);
    }
int main()
{
    int sayi;
    printf("Hesaplamak istediginiz sayiyi giriniz   =  ");
    scanf("%d",&sayi);
    
    printf("\nSonuc  =  %d",fak(sayi));
    
    
    
    getch();
    return 0;
    }
