#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i;
    char dizi[50];
    gets(dizi);
    for(i=0;i<strlen(dizi);i++)
    if(dizi[i]==' ')
    printf("\n");
    else
    printf("%c",dizi[i]);
    getch();
    return 0;
    }
