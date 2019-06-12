#include <stdio.h>
#include <conio.h>

main() {
       
       int i,s,dizi[100];
       printf("sayi:"); scanf("%d",&s);
    dizi[0]=0;
    dizi[1]=1;
    
    for(i=0; i<s; i++){
             printf("%d  ",dizi[i]);
    dizi[i+2]=dizi[i]+dizi[i+1];
    }   
   
       getch();
       return 0;}
