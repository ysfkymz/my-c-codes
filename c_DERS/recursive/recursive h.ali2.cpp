//FÝBONACCÝ SERÝSÝ

#include<stdio.h>
#include<conio.h>
int fib(int a){
    if(a==0 || a==1 ) return a;
    else
    return fib(a-1)+fib(a-2);
    
}
int main(){
    printf("%d ",fib(6));
    getch();
    return 0;
}
