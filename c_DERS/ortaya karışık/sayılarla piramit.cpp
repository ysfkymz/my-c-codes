#include"stdio.h"
#include"conio.h"
int main()
{
int n,i,j,k;
printf("n: ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=(n-i); j>=0; j--)
printf(" ");
for(k=1; k<=i; k++)
printf("%2d",i);
printf("\n");
}
getch();
return(0);
}
