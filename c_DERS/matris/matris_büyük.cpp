#include<conio.h>
#include<stdio.h>
main(){
       int dizi[3][3],i,j,eb=0;
       for(i=0; i<3; i++){
             for(j=0; j<3; j++){
                   printf("elemanlari giriniz:"); scanf("%d",&dizi[i][j]);
                   } 
                  printf("\n"); 
             }
             for(i=0; i<3; i++){
                      eb=0;
               for(j=0; j<3; j++){
                    if(eb<dizi[i][j]){
                    eb=dizi[i][j];                  
                    }
                    printf("%d",dizi[i][j]);
                      } printf(" %d\n",eb);
             } 
            
             
             
       getch();
       return 0;}
