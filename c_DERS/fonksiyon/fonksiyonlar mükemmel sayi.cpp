// fonksiyonla m�kemmel say� bulma

#include<stdio.h>
#include<conio.h>
void mkemml(int sayi){
     int i,toplam=0;
     for(i=1;i<=sayi/2;i++){
                if(sayi%i==0){
                toplam=toplam+i;
                }}
                 if(toplam==sayi){
                   printf("sayimiz m�kemmel sayidir");}
                   else          
                   printf("m�kemmel sayi degildir");
    
  }
  int main(){
    int a;
    while(1){
             printf("sayi gir");
             scanf("%d",&a);
             mkemml(a);
             }
             
             getch();
             return 0;
             }
