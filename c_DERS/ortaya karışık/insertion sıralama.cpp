#include<stdio.h>
#include<conio.h>
void sirala(int d[30], int n){
          int i,k,ekle;
          for(i=0; i<=n; i++){
                ekle=d[i];
                   for(k=i-1; k>=0 && ekle<=d[k] ; k--)
                         d[k+1]=d[k];
                         d[k+1]=ekle;
                }
       printf("%d ",d[k]);   
          }
main(){
       int i,a[30],s;  
         printf("sayi:");
        for(i=0; i<5 ;i++)
        scanf("%d",a);
       sirala(a,5);
       getch();
       return 0;}
