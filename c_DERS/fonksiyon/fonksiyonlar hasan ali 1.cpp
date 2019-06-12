#include<stdio.h>
#include<conio.h>
 int rakamsay(int a){
     int basamk=1;
       while(a>10){
            basamk++;
            a=a/10;
            }
          return basamk;
             }
        int main(){
            int sayi;
            //GEL:
            printf("bir sayi giriniz");     scanf("%d",&sayi    );
            printf("basamak sayisi %d dir",rakamsay(sayi)); 
              //    goto GEL;       
            getch();
            return 0;
            }   
