#include<stdio.h>
#include<conio.h>
#include<string.h>
int fib(int n){
    if(n==0 || n==1)
    return n;
    else 
    return fib(n-2)+fib(n-1);
    }
main(){
      int n;
      printf("fibonaccisi bulunacak deger:");   scanf("%d",&n);
      for(int i=0; i<n ;i++)
      printf("%d ",fib(i));
      
       getch();
       return 0;}
