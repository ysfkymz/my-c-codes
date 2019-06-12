#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       char isim[5][10],gstring[10];
       int i,eb,s,g,j;
       int not[10];
       for(i=0; i<5; i++){
       printf("%d kisi:",i+1);  scanf("%s",&isim[i]);
       printf("%d not:",i+1);   scanf("%d",&not[i]);
       }
       for(i=0; i<5; i++){
                for(j=0; j<5 ;j++){
          if(not[i]>not[j]){
               g=not[i];
               not[i]=not[j];
               not[j]=g;
               strcpy(gstring,isim[i]);
               strcpy(isim[i],isim[j]);
               strcpy(isim[j],gstring);
               }
             }
           }       
                for(j=0; j<5 ;j++){
            printf("%s  %d",isim[j], not[j]);                
              printf("\n");  
                         
                }       
         getch();}
