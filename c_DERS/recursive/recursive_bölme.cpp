#include<stdio.h>
#include<conio.h>
#include<string.h>
int i=2,d=0;
void bol(int s){
    if(s%3==0){   
     d=1;
     bol(s/3); 
     }
    if(s%4==0 && d==1 ){
    d=2;
    return;}
    }
main(){
       int a;
       printf("sayi:"); scanf("%d",&a);
       bol(a);
       printf((d==2)?"bolunur":"bolunmez");
       
       getch();
       return 0;
       }
