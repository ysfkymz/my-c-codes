#include<stdio.h>
#include<conio.h>

int fib(int n){
     if(n==1 || n==0 )  return n;
     else if (n==2)  return 1;
     else
      return fib(n-3)+fib(n-2)+fib(n-1);
     }

main(){
       for(int i=0; i<10; i++)
       printf("%d  ",fib(i));
       getch();
       return 0;}
