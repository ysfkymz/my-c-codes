#include <stdio.h>
#include <conio.h>

int topla(int a,int b){
    
    return a+b;
    
    }
int carp(int a,int b){
    
    int i,toplam=0;
    for(i=0;i<b;i++)
    {
     toplam = topla(toplam,a);
    }
    return toplam;
    }

int main() {
       
      printf("%d",carp(3,5));
  
   
       getch();
       return 0;}
