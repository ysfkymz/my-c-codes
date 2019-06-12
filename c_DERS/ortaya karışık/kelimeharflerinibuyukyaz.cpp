#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char dizi[50];
    gets(dizi);
    for(i=0;i<strlen(dizi);i++){
    if(dizi[i]==' ')
    dizi[i+1]=dizi[i+1]-32;}
    dizi[0]-=32;
    puts(dizi);
    
    
    getch();
    return 0;
    }
