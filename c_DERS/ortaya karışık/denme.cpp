#include<stdio.h>
#include<conio.h>
int main() {
  
    int a,b,i,dizi[8],sayac=0;
    scanf("%d",&a);
    for(i=0;i<8;i++)
    {
      sayac++;
      if(a>=2){ dizi[i]=a%2; a=a/2;}
      else{dizi[i]=a;break;}             
    }
    for(i=sayac-1;i>=0;i--)
    printf("%d",dizi[i]);
    getch();
    return 0;}


/*int a,b,i;
  scanf("%d",&a);
  b=a;
  for(i=7;i>=0;i--){
  a=a>>i;
  a=a&1;
  printf("%d",a);
  a=b;        
  } */
