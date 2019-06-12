#include<stdio.h>
#include<conio.h>
int OBEB(int a, int b){
    if(a==b)
    return a;
    else 
    return OBEB(b,b%a);  
    }


main(){
       int a,b,obeb,okek;
       puts("sayilari giriniz:"); scanf("%d %d",&a,&b);
       obeb=OBEB(a,b);
       okek=a*b/obeb;
       printf("okek(%d %d)=%d",a,b,okek);
       getch();
       return 0;}
