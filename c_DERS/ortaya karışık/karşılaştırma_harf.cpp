#include<stdio.h>
#include<conio.h>

main(){
       char kr1,kr2,a[50];
       int i,sayac=1,indis=0;
       for(i=0;i<20;i++)
        {
          kr1=getche();
          if(kr1==kr2) {
                   sayac++;    
                   }
                else {
              if(i!=0)       
               a[indis++]=kr2;
               a[indis++]=sayac+48;
               sayac=1; 
                     }       
        }
            kr2=kr1; 

         a[indis++]=kr2;
               a[indis++]=sayac+48;
                 puts(a);
                 getch();
                 return 0;
                 }
 
 
 
 


