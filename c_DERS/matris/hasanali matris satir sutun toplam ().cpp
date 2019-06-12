#include<stdio.h>
#include<conio.h>
int main(){
    int dizi[3][3],i,j,toplam=0,gt=0;
    printf("sayilari giriniz");
    for(i=0;i<3;i++){
                     for(j=0;j<3;j++){
                           scanf("%d",&dizi[i][j]);           
}}
 for(i=0;i<3;i++){
                  toplam=0;
                     for(j=0;j<3;j++){
                                      toplam+=dizi[i][j];
                                  printf("%d " ,dizi[i][j]);
                                      }
                                      printf("%d \n",toplam);}
for(j=0;j<3;j++){
                  toplam=0;
                     for(i=0;i<3;i++){
                                      gt+=   dizi[i][j];
                                      toplam+=dizi[i][j];}
                                       printf("%d ",toplam);}
                                    
                                       
                                        printf("%d ",gt);
                                  getch();
                                  return 0;
                                  }
