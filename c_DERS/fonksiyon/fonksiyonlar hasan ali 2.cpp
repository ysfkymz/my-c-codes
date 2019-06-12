#include<stdio.h>
#include<conio.h>

    void yildizbas(int a[]){
         int i,j;
         for(i=0;i<5;i++){
                printf("%d ",a[i]);
               for(j=0;j<a[i];j++){          
               printf("*");
               }
               printf("\n");}
                return;     
                          }
         int main(){
             int sayi[5],i;
             printf("sayilari giriniz");
             for(i=0;i<5;i++){
              scanf("%d",&sayi[i]);                 
              }
             yildizbas(sayi);                        
              getch();
              return 0;
          }
