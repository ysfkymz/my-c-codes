#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main(){
       char cumle[100],a[100];
       int s,i;
       printf("1.kelime:");   gets(cumle); 
       printf("2.kelime:");   gets(a);
             if(strlen(cumle)>strlen(a)){
                  printf("en uzun kelime: %s",cumle);
                  }
                  else if (strlen(cumle)==strlen(a)){
                    printf("esit");}
             else
            printf("en uzun kelime%s:",a);
             
        getch();}
