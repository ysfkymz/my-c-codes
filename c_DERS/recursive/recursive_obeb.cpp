#include<stdio.h>
#include<conio.h>
int obeb(int a,int b){
    if(a==b)
    return a;
    else 
    return obeb(b,b%a);
    }
main(){
       int a,b;
          printf("sayilari giriniz:");  scanf("%d %d",&a,&b);
          printf("obeb(%d %d)=%d ",a,b,obeb(a,b));      
       
       getch();
       return 0;}
