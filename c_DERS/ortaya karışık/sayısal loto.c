#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h> 
#include <time.h>
int i,j,s=0,BS[6],KS[6];
main(){
       randomize();
       for(i=0; i<6; i++) BS[i]=random(49)+1;
       for(i=0; i<6; i++){
             printf("%d.tahmin:",i+1);  scanf("%d",&KS[i]);
             }
       for(i=0; i<6; i++){
       for(j=0; j<6; j++){
       if(KS[i]==BS[j])
       {
       s++;   break;                
       }}}
       printf("%d tane doðru tahminde bulundunuz....",s);
       getch();}
