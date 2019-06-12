#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
       void katakter_kaydir(char *, int);
       void katakter_kaydir(char *dizi, int sayi){
            int i=0,j=0;
            for(j=0; j<sayi+1; j++){
                  for(i=j; i<sayi; i++){
                        printf("%c",*(dizi+i));
                        }
                  for(i=0; i<j; i++){
                        printf("%c",*(dizi+i));
                        } printf("\n");
                  }
              }
       main(){
              char karakter[10]={'b','i','l','g','i','s','a','y','a','r'};
              int i=0,s=10;
              katakter_kaydir(karakter,s);
          getch();
}
