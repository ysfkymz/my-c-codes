#include<stdio.h>
#include<conio.h>
main()
{
      int i,nt=0,pt=0,s;
      for(i=0; i<10; i++){
      printf("sayi"); scanf("%d",&s);
      
      if(s<0)
      nt=nt+s;
      else
      pt=pt+s;
      }
      printf("pozitif toplam: %d",pt);
      printf("negatif toplam: %d",nt);
      
      getch();
      return 0;
      }
