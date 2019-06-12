#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
      char d[50];
      int sayac=0,i;
      printf("cumle giriniz:\n");
      scanf("%s",d);
      for(i=0; i<strlen(d); i++){
            if(d[i]=='m' && d[i+1]=='a')
               {
               sayac++;
               i++;                   
               }
               else
          printf("%c",d[i]);
            }
            for(i=0; i<sayac; i++)
        {        
          printf("ma");      
          }     
       getch();
       return 0;}
