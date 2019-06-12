#include<conio.h>
#include<stdio.h>
main(){
       int dizi[3][3],i,j,eb=0;
             
             for(i=0; i<3; i++){
               for(j=0; j<3; j++){
                  if(i==j || j+i==2){
                    printf(" X   ");
                    }
                    else {
                    printf("%d%d   " ,i,j);                   
                      }
                    } printf(" \n");
                  } 
             
       getch();
       return 0;
       }
