#include<stdio.h>
#include<conio.h>
#include<string.h>
int i=2;
void asal(int s){
    
     if(s==1)
     return; 
      else 
        {
          if(s%i==0){
           printf("%d ",i);
           asal(s/i);
           }
           else{
           i++;
           asal(s);}
            }
    }
main(){
       int a;
       printf("sayi:"); scanf("%d",&a);
       asal(a);
       
       getch();
       return 0;
       }
