#include<stdio.h>
#include<conio.h>
main(){
       int s,i,k=1;
       printf("sayi:");  scanf("%d",&s); 
         for(i=2; i<s; i++) {
              if(s%i==0){
                   k=0;
                   break;
                   }
              }
              if(s==1){
                  printf("asal degil");
                   }
         if(k==0 && s==1)
         printf("asal degil");
         else 
         printf("asal");     
       getch();}
