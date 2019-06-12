#include<stdio.h>
#include<conio.h>
int i=1;
void saydir()
{
  if(i<=10){
  printf("%d ",i);
  i++;
  saydir();
}
}

int main()
{
    saydir();
    getch();
    return 0;
    }
