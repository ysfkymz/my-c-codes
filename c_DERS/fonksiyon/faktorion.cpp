#include<stdio.h>
#include<conio.h>
int f(int fa){
    if(fa== 0 || fa==1)
    return 1;
   else{    
        return fa*f(fa-1);  
         }
}
main(){
       int i,a;
       for(i=0; i<=1000; i++)
       {
        if(i==(f(i%10)+f((i/10)%10)+f(i/100)))
        {
           printf("%d ",i);     
        }        
       }
       
       getch();
       return 0;
       }
