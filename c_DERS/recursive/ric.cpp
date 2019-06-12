#include<stdio.h>
#include<conio.h>
int main() {
  int i,a,s1=0,s2=1;
  printf("%d %d ",s1,s2);
  for(i=0; i<20; i++){
   s1=s2+s1;
   s2=s1+s2;
   printf("%d %d ",s1,s2);
}
    getch();
    return 0;}
