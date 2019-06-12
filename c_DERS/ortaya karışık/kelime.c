 #include<stdio.h>
 #include<conio.h>
 
int sayi(int a, int b){ int eb;
if(a>b)
eb=a;
else 
eb=b;
return eb;
    }
    
      main() {
              int a,b;
              printf("a:"); scanf("%d",&a);    
              printf("b:"); scanf("%d",&b);
             printf("%d",sayi(a,b));
             getch();
             }
