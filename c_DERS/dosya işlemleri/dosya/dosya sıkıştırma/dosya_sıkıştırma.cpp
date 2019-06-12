#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
    FILE * read , *write;
    int a,b;
    char c;
    read=fopen("oku.txt","r");
    write=fopen("yaz.txt","w");
    while(!feof(read)){
            fscanf(read,"%d %d",&a,&b);
            c=(a<<4)|b; 
            fprintf(write,"%d",c);
            }
         fclose(read);  
         fclose(write);
       getch();
       return 0;}
