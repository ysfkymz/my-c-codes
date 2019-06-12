#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
   main() {
          char dizi[2][2];
          int i,j;
          for(i=0; i<2; i++){
                   for(j=0; j<2; j++){
             printf("%d %d :",i,j);
             scanf("%c \n",&dizi[i][j]);
             }
          }      
          for(i=0; i<2; i++){
          for(j=0; j<2; j++){
             printf(" %c ",dizi[i][j]);
             }
             printf("\n");} 
           getch();
            }
