#include <stdio.h>
#include <conio.h>
int obeb(int a,int b);

main()
{
int sayi1,sayi2;

printf("iki sayi giriniz:");
scanf("%d %d",&sayi1, &sayi2);

printf("OBEB : %d\n",obeb( sayi1,sayi2 ));
}
int obeb(int a, int b)
{
   if (b == 0)
      return a;
   else
      return obeb(b, a % b);
}
      getch();
      return 0;
}
