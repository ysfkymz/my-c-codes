#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int i,j;
       int dizi[2][2]={{4,6},{1,2}};
       for(i=0; i<2; i++){
             for(j=0; j<2; j++){
                  printf("%d",dizi[i][j]);
                   }printf("\n");
             }
            for(i=0; i<2; i++){
             for(j=0; j<2; j++){
               printf("%d",dizi[1-j][i]);
                   }printf("\n");
             } 
        getch();}

