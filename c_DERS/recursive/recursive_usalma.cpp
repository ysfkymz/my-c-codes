#include<stdio.h>
#include<conio.h>
#include<string.h>
int c=1;
int us(int s,int u){
    if(u==0)
    return 1;
    else 
    return s*us(s,u-1);
    
    }
main(){
       int s,u;
       printf("sayi:");  scanf("%d",&s);
       printf("us:");  scanf("%d",&u);
       printf("%d",us(s,u)) ; 
       getch();
       return 0;
       }
