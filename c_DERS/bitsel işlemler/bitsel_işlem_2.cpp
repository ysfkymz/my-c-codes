#include<conio.h>
#include<stdio.h>
int us(int sayi){
          int i,deger=0;
          for(i=0; i<8; i++){
         deger=deger<<1;
         if(i!=7-sayi)
           deger = deger | 1;                
       }                                 //    0000 0111     
          return deger;                //      0000 0101    
    }

main(){
       int s,b,i,j;
       printf("sayi:");    scanf("%d",&s);
       printf("hangi bit:");   scanf("%d",&b);          
       s=s&us(b);
       printf("%d",s);                
        
        getch();
       return 0;}
