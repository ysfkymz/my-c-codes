#include<stdio.h>
#include<conio.h>
main(){
       int i,j; 
        for(i=0; i<4; i++){
            for(j=0 ; j<4; j++){
                 printf("%d%d   " ,i,j);         
                    } printf("\n");    
                 }
printf("\n");

        for(i=0; i<4; i++){
            for(j=0 ; j<4; j++){
                    if((i+j)>=3){
                    printf("X    ",j,i);
                    }
                    else {
                    printf("%d%d   " ,i,j);               
                         }        
            } printf("\n");    
         }
        
       
        getch();
        return 0;}
