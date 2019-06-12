
#include <stdio.h>
#include <conio.h>

int main()
{
  int obeb(int,int);  //fonksiyon
  int a,b;
  printf("Iki sayi giriniz:\n");
  scanf("%d%d",&a,&b);
  printf("%d , %d sayilarinin obebi: %d",a,b,obeb(a,b));
  getch(); 
}
int obeb(int sayi1,int sayi2)
{
 int d=2,ebob=1;
 while(sayi1>1 || sayi2>1)
    {
      if(sayi1%d==0 && sayi2%d==0)
        {
         ebob*=d;
         sayi1/=d;
         sayi2/=d;             
        }   
        else
        {
        if(sayi1%d==0 && sayi2%d!=0){
        while(sayi1%d==0)
        {sayi1/=d;} 
        d++;
        }
        if(sayi2%d==0 && sayi1%d!=0)
        {
        while(sayi2 % d==0)
        {sayi2/=d;}
        d++;
        }
        if(sayi1%d!=0 && sayi2%d!=0)
        div++;           
 }   
}   
   return ebob;   
}
