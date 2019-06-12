#include<stdio.h>
#include<conio.h>
#include<string.h>

void degis(char a[],char b[])
{
     char k;
     int i;
     for(i=0;i<20;i++)
     {
     a[i]=b[i];
     }
}
int main()
{
    char dizi[5][20];
    int i,j;
    for(i=0;i<5;i++)
    scanf("%s",dizi[i]);
    
    for(i=0;i<5;i++)
      for(j=0;j<4;j++)
        if(strcmp(dizi[j],dizi[j+1])==1)
        {
        degis(dizi[5],dizi[j]);
        degis(dizi[j],dizi[j+1]);
        degis(dizi[j+1],dizi[5]);
        }
    for(i=0;i<5;i++)
    printf("%s\n",dizi[i]);
    getch();
    return 0;
    }
