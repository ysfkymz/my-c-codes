#include<stdio.h>
#include<conio.h>
void uzunluk(char d[][10]){
     int i,j,sayac=0;
     for(i=0; i<3; i++){
              for(j=0; j<10; j++){
              if(d[i][j]!='\0'){
               sayac++;
               printf("%c",d[i][j]);                    
                    }
                   else break; 
              }
              printf(" %d \n" ,sayac);
              sayac=0;
     } }
main(){
       int i;
       printf("isimleri giriniz: \n");
       char dizi[3][10];
        for(i=0; i<3; i++){
                scanf("%s",dizi[i]);
                }
             uzunluk(dizi);   
       getch();
       return 0;
       }
