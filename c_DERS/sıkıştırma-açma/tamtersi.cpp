#include<stdio.h>
#include<conio.h>

void ikilik(int sayi)
{
     int i, yedek=sayi;
      for(i=0;i<=7;i++)               // 1000 0101 >> 7 0000 0010
      {  sayi= sayi>>i;              // 0000 0001      0000 0001 
         sayi=sayi&1;
         printf("%d",sayi);
         sayi=yedek;               // 0000 0001      0000 0000
      }
}int k=7;
void r(int);
int main()
{
       int sayi;
    while(sayi!=0){
    scanf("%d",&sayi);
    r(sayi);
    printf("\n");
    } 
    
    getch();
    return 0;
    }
void r(int a){
     
     if(k>=0){
             k--;
             printf("%d",a&1);
             r(a>>1);
              
              
              }
     
     
     }
