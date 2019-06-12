#include<stdio.h>
#include<conio.h>
int kup(int t){
     return t*t*t;
    }
main(){
       int sayi,s1,s2,s3,t;
       for(sayi=1; sayi<500; sayi++)
         {
    s1=sayi/100;
    s2=(sayi/10)%10;
      s3=sayi%10;       
      t= kup(s1)+ kup(s2)+  kup(s3) ;
      if(t==sayi)
      {
      printf("%d \n",sayi);
      }
         }       
       
       getch();
       return 0;
       }
