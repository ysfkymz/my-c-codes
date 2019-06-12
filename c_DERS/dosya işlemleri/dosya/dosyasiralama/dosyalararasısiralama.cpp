#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    FILE *dos1,*dos2,*dos3;
    int durum=0;
    //int a,b;
    char a[20],b[20];
    dos1=fopen("dosya1.txt","r");
    dos2=fopen("dosya2.txt","r");
    dos3=fopen("dosya3.txt","w");
    while(!feof(dos1) || !feof(dos2))
    {
      if(durum==0 ||durum==1)
      fscanf(dos1,"%s",a);
      if(durum==0 ||durum==2)
      fscanf(dos2,"%s",b);
      if(strcmp(a,b)==-1 || feof(dos2)){
      fprintf(dos3,"%s ",a);
      durum=1;
      }
      else if(a>=b || feof(dos1)){
      fprintf(dos3,"%s ",b);
      durum=2;
      }               
    }
    getch();
}
