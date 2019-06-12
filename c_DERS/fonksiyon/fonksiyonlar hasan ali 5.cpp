#include<stdio.h>
#include<conio.h>
 void uzunlukhesapla(char dizi[][10]){
      int i,j,uz=0;
      for(i=0;i<3;i++){
        for(j=0;j<10;j++){
        if(dizi[i][j]!='\0')   
         {
           uz++;
           printf("%c",dizi[i][j]);
             }else break;
            }
           printf(" %d \n",uz);
           uz=0;
            }}   
      
      int main(){
          printf("isimleri giriniz \n");
          int i;
          char dizi[3][10];
          for(i=0;i<3;i++){
                           scanf("%s",dizi[i]);
                           }
                           uzunlukhesapla(dizi);
                           getch();
                           return 0;
                           }
      
     
     
