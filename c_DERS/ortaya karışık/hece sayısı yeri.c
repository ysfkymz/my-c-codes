#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main(){
       char c[250],h[30],a[30];
       int i,j,s=0,yer[250];
       printf("cümle:"); gets(c);
       printf("hece:");   gets(h);
       for(i=0; i<=strlen(c); i++){
             for(j=0; j<=strlen(h); j++){
                   a[j]=c[i+j];
                   if((strncmp(h,a,yer[s-1]))==0){
                        s=s+1;
                        yer[s-1]=i+1;
                        }
                   }
             }
             printf("heceden %d tane var",s);
             printf("\n yerleri  \n");
             for(i=0; i<s; i++)
             printf("-%d",yer[i]);
        getch();}
