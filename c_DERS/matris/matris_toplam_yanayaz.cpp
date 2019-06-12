#include<conio.h>
#include<stdio.h>
main(){
       int dizi[3][3],i,j,eb=0,t;
       for(i=0; i<3; i++){
             for(j=0; j<3; j++){
                   printf("elemanlari giriniz:"); scanf("%d",&dizi[i][j]);
                   } 
                  printf("\n"); 
             }
             
             for(i=0; i<3; i++){
                      eb=0;
               for(j=0; j<3; j++){
                    eb=eb+dizi[i][j]; 
                      } printf(" %d \n",eb);
             } 
       getch();
       return 0;}
