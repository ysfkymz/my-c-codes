#include<stdio.h>
#include<conio.h>
int main(){
    FILE *x,*y;
    char c=0;
    int a,b,i=0;
    x=fopen("p.txt","r");
    y=fopen("k.txt","w");
    while(!feof(x)){
    if(i==8)
    break;
    fscanf(x,"%d",&a);
    c=c<<2;
    c=c|a;
    i++;
    if(i%4==0){             
    fprintf(y,"%c",c); 
    c=0;
    }      
   }
    fclose(x);
    fclose(y);
    getch();
    return 0;}
    
    
    
    
    
