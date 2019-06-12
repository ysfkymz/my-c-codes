#include<stdio.h>
#include<conio.h>

int main()
{                         
    int sayi,say=0;               
    int i=0;                  
    scanf("%d",&sayi);
    while(i<8){
    if(!sayi&1) // 0 larýn sayisi
    say++;
    sayi=sayi>>1;
    i++;
    }
    
    printf("%d",say);

    
    getch();
    return 0;
    }
