#include<stdio.h>
#include<conio.h>

int pztfbln(int a)
{
    int i;
    int toplam=0;
    for(i=1;i<=a/2;i++)
    {
     if(a%i==0) toplam+=i;                   
    }
    return toplam;
    }

int main()
{
    int a,b;
    A:
    scanf("%d%d",&a,&b);
    if(pztfbln(a)==b && pztfbln(b)==a ) printf("\narkadas sayi\n");
    else printf("\ndegil\n");
    goto A;
    getch();
    return 0;
    }
