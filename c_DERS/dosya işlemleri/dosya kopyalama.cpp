#include<stdio.h>
#include<conio.h>
int main(){
    FILE *a,*b;
    char x[50];
    a=fopen("C:\\Users\\Hasan Ali\\Desktop\\he.txt","r");
    b=fopen("C:\\Users\\Hasan Ali\\Desktop\\akýn.txt","w");
    while(!feof(a)){
    fscanf(a,"%s",x);
    fprintf(b,"%s ",x);}
    fclose(a);
    fclose(b);
    
    
    getch();
    return 0;}
