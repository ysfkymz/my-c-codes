#include<stdio.h>
#include<conio.h>

int main()
{   int sayac=1,krs=0;
    char a,b,kr;                    
    for(int i=0; i<20 ;i++){
    a=getche();
    if(a==b)
    sayac++;  
    else{sayac=1;}
    b=a;
    
    if(sayac>krs){
    krs=sayac;
    kr=b;
}}
   printf("%d kere %c tekrar etti",krs,kr);
    
    getch();
    return 0;
    }
