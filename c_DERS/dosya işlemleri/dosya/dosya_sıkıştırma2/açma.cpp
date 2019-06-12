#include<stdio.h>
#include<conio.h>
main(){
       FILE *d1,*d2;
       int i=0,b=0;
       char a;
       d1=fopen("k.txt","r");
       d2=fopen("yaz.txt","w");
       while(!feof(d1))
       {
          fscanf(d1,"%d",&b);
          for(i=15 ;i>=0; i--){
               fprintf(d2,"%d",(b>>i)&1); 
                
                }
       }
       fclose(d1);
       fclose(d2);
       
       getch();
       return 0;}
