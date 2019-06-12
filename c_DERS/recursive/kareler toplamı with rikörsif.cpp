#include<stdio.h>
#include<conio.h>
int ktop(int);
int main(){
    int a;
    printf("1*1+2*2+...+n*n  bir n sayisi giriniz");
    scanf("%d",&a);
    printf("sonuc = %d",ktop(a));  
    
    getch();
    return 0;}
    int ktop(int a){
    
        if(a<=1)
        return a;
        else 
        return ((a*a)+ktop(a-1));
        
        
        
        
        
        }
