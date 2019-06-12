#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* int fac(int ){
     int s,a=1,f=1;
     printf("sayi:"); scanf("%d",&s);

     while (a<=s){
   f=f*a;
   a=a+1;
   }
   return f;
}*/
           
    int main()
    {
        int i;
        float e=1,a=1;
        for(i=1;i<=10;i++)
    {
        a*=(float)1/i;
        e+=a;
    }
    printf("e sayisi %f dir",e);
    getch();
    return 0;
    }
