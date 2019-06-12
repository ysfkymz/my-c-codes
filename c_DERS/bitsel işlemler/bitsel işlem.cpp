#include<conio.h>
#include<stdio.h>
int us(int sayi){
    int n,sonuc=1; 
    for(n=0; n<sayi ;n++){
          sonuc=sonuc*2;
          }
          return sonuc;
    }

main(){
       int s,b,i,j;
       printf("sayi:");    scanf("%d",&s);
       printf("hangi bit:");   scanf("%d",&b);          
       s=s|us(b);
       printf("%d",s);              
        
        
        getch();
       return 0;}
