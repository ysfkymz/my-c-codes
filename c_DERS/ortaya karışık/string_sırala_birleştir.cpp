#include<stdio.h>
#include<conio.h>
#include<string.h>
int sirala(char a[10], char b[10]){
       int i,j ,k;
       char c[20];
       for(i=0,j=0,k=0 ; a[i]||b[j] ;k++ ){
           if(a[i]<b[j]  ||  (a[i] && !b[j] )){
                c[k]=a[i];
                i++;  }
                  else {
                   c[k]=b[j]; 
                   j++; }
                }
     c[k]='\0';
     printf("%s ",c);
    }
main(){
       char a[10],b[10];
      printf("kelime:");
      scanf("%s %s" ,a,b);
      sirala(a,b);



       getch();
       return 0;}
