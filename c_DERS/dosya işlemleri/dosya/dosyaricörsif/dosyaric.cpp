#include<stdio.h>
#include<conio.h>

FILE *in;
void ters()
{
     char a;
     if(!feof(in)){
     fscanf(in,"%c",&a);
     ters();
     }
     printf("%c",a);
     }

int main()
{
    in=fopen("dosya.txt","r");
    ters();
    getch();
}
    
