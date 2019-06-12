#include<stdio.h>
#include<conio.h>
main(){
       FILE *d1,*d2;
       int a,i=0;
       char b=0;
       d1=fopen("oku.txt","r");
       d2=fopen("yaz.txt","w");
       while(!feof(d1))
       {
       if(i==10) break;
         fscanf(d1,"%d",&a);                
         b=(b<<2)|a;             
         i++;
       if(i%4==0){
         fprintf(d2,"%c",b);  
         b=0;
           }  
       }
       
       fclose(d1);
       fclose(d2);
       
       getch();
       return 0;}
