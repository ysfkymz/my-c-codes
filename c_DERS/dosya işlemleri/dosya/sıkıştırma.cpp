#include<stdio.h>
#include<conio.h>
int main(){
    FILE *x,*y;
    char c;
    int a,b,i=0;
    x=fopen("C:\\Users\\Ali\\Desktop\\p.txt","r");
    y=fopen("C:\\Users\\Ali\\Desktop\\k.txt","w");
    while(!feof(x)){
    i++;
    if(i==5)
    break;
    fscanf(x,"%d%d",&a,&b);
    c=(a<<4)|b;
    fprintf(y,"%c",c);}
    fclose(x);
    fclose(y);
    getch();
    return 0;}
    
    
    
    
    
