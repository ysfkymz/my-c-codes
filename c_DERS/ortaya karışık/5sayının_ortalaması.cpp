#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){    
       int sayac=1,i,s;
       double t=0,ort;
  /*     x:
         printf("sayi:");   scanf("%d",&s); 
         sayac++;    
         t=t+s; 
         if(sayac==5){       
           ort= t/5;     
              }
       goto x;  */
       
      while(sayac<=15){
              printf("sayi:");   
              scanf("%d",&s);
              t=t+s;
                
              if(sayac%5==0) {
              ort=t/5;
                printf("ortalama: %f \n",ort);
                 t=0;
                }
                sayac++; 
              }
   
    
    
       getch();
       return 0;
       }
