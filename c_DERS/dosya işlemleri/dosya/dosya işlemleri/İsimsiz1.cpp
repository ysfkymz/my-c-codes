#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *in,*out,*add;
    char a;
    in=fopen("dosya.txt","r");
    out=fopen("yaz.txt","w");
    add=fopen("ekle.txt","a+");
    while(!feof(in))
    {
     fscanf(in,"%c",&a);
     fprintf(out,"%c",a);
     fprintf(add,"%c",a);
    }
    getch();}
