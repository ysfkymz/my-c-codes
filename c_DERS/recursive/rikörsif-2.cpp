#include<stdio.h>
#include<conio.h>
int top(int);
int main(){
    int a;
    printf("1+2+...+n  bir n sayisi giriniz");
    scanf("%d",&a);
    printf("sonuc = %d",top(a));  
    
    getch();
    return 0;}
    
    int top(int a){
        if(a<=1)
        return a;
        else 
        return (a+top(a-1));
        
        
        
        
        
        }
