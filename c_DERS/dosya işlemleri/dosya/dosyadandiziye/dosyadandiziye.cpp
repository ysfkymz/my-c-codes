#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *in;
    char dizi[20];
    int i=0;
    in=fopen("dosya.txt","r");
    while(!feof(in))
    {
      fscanf(in,"%c",&dizi[i++]);
    }
    for(i=strlen(dizi)-1;i>=0;i--)
    {
      printf("%c",dizi[i]);
    }
    printf("\n");
    puts(dizi);
    getch();
}
    
