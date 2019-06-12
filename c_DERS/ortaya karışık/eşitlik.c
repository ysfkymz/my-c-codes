#include<stdio.h>
#include<conio.h>
main(){    
           int s,i,j,k,l,sayi,t;
           printf("4 basamakli sayi:");   scanf("%d",&s);
            for(i=1; i<10; i++){
                  for(j=1; j<10; j++){
                        for(k=1; k<10; k++){
                            for(l=1; l<10; l++){
                                 sayi=i*1000 + j*100+ k*10 + l;
                                 t=(l*1000 + k*100 + j*10 + i)*4;
                                  }     
                              }
                        }
                  }
    if(sayi==t)
    printf("esit"); 
    else 
    printf("esit degil");         
           
           getch();}
