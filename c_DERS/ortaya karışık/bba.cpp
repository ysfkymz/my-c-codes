#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
     char a;
     X:
     a=getche();
     if(a!='b')
     goto X;
     else{
     a=getche();
     if(a!='b')
     goto X;
     else
     {
     Y:
     a=getche();
     if(a=='a')
     return 0;
     if(a=='b')
     goto Y;
     else
     goto X;
     }
     }
       getch();
       return 0; }
