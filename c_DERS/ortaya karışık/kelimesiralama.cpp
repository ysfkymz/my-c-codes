#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    
    char dizi1[50],dizi2[10][20];
    int boyut[10][2];
    int i;
    gets(dizi1);
    int sayac=0,indis=0;
    for(i=0;i<strlen(dizi1);i++)
    {
      if(dizi1[i]==' ')
      {
        sayac=0; indis++;           
      }
      else
      {
        dizi2[indis][sayac++]=dizi1[i];
      }
    }
    for(i=0;i<=indis;i++)
    {
      boyut[i][0]=i;
      boyut[i][1]=strlen(dizi2[i]);
    }
    int g1 ,g2,j;
    for(i=0;i<=indis;i++)
     for(j=0;j<=indis-1;j++)
       if(boyut[j][1]>boyut[j+1][1])
       {
                g1=boyut[j+1][1]; g2=boyut[j+1][0];
                boyut[j+1][1]=boyut[j][1]; boyut[j+1][0]=boyut[j][0];
                boyut[j][1]=g1;             boyut[j][0]=g2;      
       }
    for(i=0;i<=indis;i++)
    puts(dizi2[boyut[i][0]]);
    
    getch();
    return 0;
    }
