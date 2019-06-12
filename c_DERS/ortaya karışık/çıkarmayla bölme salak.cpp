#include<stdio.h>
#include<conio.h>

main(){
       int a,b,bolum=0;
       scanf("%d %d",&a,&b);
       for(int i=0; a>b; i++)  {
       a=a-b;
       bolum++;  }
       printf("bolum:%d  kalan:%d",bolum, a);
       
       getch();
       return 0;
       }
