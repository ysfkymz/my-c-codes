#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

bool dogrumu(char a[])
{
     int i;
     for(i=0;i<strlen(a);i++)
     if(a[i]=='_')
     return false;
     return true;
      
}

bool varsa(char a[], char b[],char kr)
{
    int  i;
    bool durum=false;
    for(i=0;i<strlen(a);i++)
    if(a[i]==kr){
    b[i]=kr;
    durum =true;}
    return durum;
    
    
}
 void dizisifirla(char x[])
    {
     int i;
     for(i=0;i<20;i++)
     x[i]='\0';
     }
main(){

       int i,j,hak=5;
       char ch,dizi[20],dizi1[20];
       scanf("%s",dizi);
       dizisifirla(dizi1);
       for(i=0;i<strlen(dizi);i++)
       dizi1[i]='_';
       
       system("cls");
       
       puts(dizi1);
       printf("\n");
       for(;;)
       {
         ch=getche();
         system("cls");
         if(!varsa(dizi,dizi1,ch))
         hak--;
         if(dogrumu(dizi1)) {
         printf("Tebrikler"); break;}
         puts(dizi1);
         if(hak==0){
         printf("uff_salak");
         break;}
       }
       
       
       getch();
       return 0;
       }
