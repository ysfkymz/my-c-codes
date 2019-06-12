#include<stdio.h>
#include<conio.h>
#include<string.h>
int durum=0;
void esitmi(char *a, char *b){
       for( ; *a|| *b ; b++, a++) {
       if(*a!= *b){
        durum=1;
        break;
        }
      } 
    }
main(){
       char a[10],b[10];
       puts("kelime:");
       scanf("%s %s",a,b);
       esitmi(a,b);
       if(durum==1)
       printf("esit degil");
       else
       printf("esit");
       getch();
       return 0;}
