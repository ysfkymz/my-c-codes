#include <stdio.h>
#include <conio.h>

int main()
{ 
        int sayi[5];
         int i,eb=0,ek=,toplam=0;
         float ort;
         for(i=1; i<=5; i++){
               printf("%d. sayi:",i); scanf("%d",&sayi[i]);
               toplam=toplam+sayi[i];
               
                if(sayi[i]>eb){
                eb=sayi[i];}
                
                if(sayi[i]<ek){
                sayi[i]=ek;}
               }
            ort=toplam/5;
            printf("ortalama: %1.1f\n",ort);   
            printf("en buyuk: %d\n",eb);
            printf("toplam: %d\n",toplam);
            printf("en kucuk:%d",ek);
    getch();
    return 0;
}
