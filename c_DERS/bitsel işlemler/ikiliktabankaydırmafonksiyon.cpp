#include<stdio.h>
#include<conio.h>

int kaydir=0;
void ikilik(int sayi)
{
     int i, yedek=sayi;
      for(i=7;i>=0;i--)               // 1000 0101 >> 7 0000 0010
      {  sayi= sayi>>i;              // 0000 0001      0000 0001
         sayi=sayi&1;
         printf("%d",sayi);
         sayi=yedek;               // 0000 0001      0000 0000
      }
}

void recursiveiki(int);


int main()
{
    int sayi;
    while(sayi!=0){
    scanf("%d",&sayi);
    recursiveiki(sayi);
    printf("\n");
    }
    
    
    getch();
    return 0;
    }

void recursiveiki(int sayi)
{
     if(kaydir<7)  //  00000111 00000011 00000001 00000000 00000000 00000000 00000000 00000000
     { 
       kaydir++; 
       recursiveiki(sayi>>1); 
     } 
     printf("%d",sayi&1);
     }

