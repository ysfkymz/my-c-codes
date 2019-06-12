#include<stdio.h>
#include<conio.h>
main(){
       FILE *d1,*d2;
       int i=0,b=0;
       char a;
       d1=fopen("oku.txt","r");
       d2=fopen("yaz.txt","w");
       while(!feof(d1))
       {
       if(i==16) break;
         fscanf(d1,"%c",&a);
       b=(b<<1)|(a-48);
         i++;
         if(i%16==0)
         fprintf(d2,"%d",b);
       }
       fclose(d1);
       fclose(d2);
       
       getch();
       return 0;}
