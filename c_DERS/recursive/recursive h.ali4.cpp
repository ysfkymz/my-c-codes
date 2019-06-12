#include<stdio.h>
#include<conio.h>
int   boyu(int a){
      if(a==0)
      return 8;
      else
      return boyu(a-1)+boyu(a-1)/2;
      }
      int main(){
          printf("%d",boyu(5));
          getch();
          return 0;
          }
          
               
