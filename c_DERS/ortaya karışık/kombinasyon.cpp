#include<stdio.h>
#include<conio.h>

int fakt(int a)
{
    if(a==0)
    return 1;
    else
    return a*fakt(a-1);
    
    }

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",fakt(a)/(fakt(a-b)*fakt(b)));
    getch();
    return 0;
    }
