#include<stdio.h>
#include<conio.h>
int main(){
    FILE *x,*y;
    char c=0;
    int a=0,b,i=0;
    x=fopen("p.txt","r");
    y=fopen("k.txt","w");
    while(!feof(x)){
    if(i==16)
    break;
    fscanf(x,"%c",&c);
    a=a<<1;
    a=a|(c-48);
    i++;
    if(i%16==0){             
    fprintf(y,"%d",a); 
    }      
   }
    fclose(x);
    fclose(y);
    getch();
    return 0;}
    
    
    
    
    
