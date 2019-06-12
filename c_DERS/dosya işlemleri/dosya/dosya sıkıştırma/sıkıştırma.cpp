#include<stdio.h>
#include<conio.h>
int main(){
    FILE *x,*y;
    char c;
    int a,b,i=0;
    x=fopen("p.txt","r");
    y=fopen("k.txt","w");
    while(!feof(x)){
    if(i==5)
    break;
    fscanf(x,"%d%d",&a,&b);  //0111 0000
    c=(a<<4)|b;              //0000 1100
    fprintf(y,"%c",c);       //0111 1100
    i++;}
    fclose(x);
    fclose(y);
    getch();
    return 0;}
    
    
    
    
    
