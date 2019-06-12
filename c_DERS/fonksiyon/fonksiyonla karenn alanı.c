 #include<stdio.h>
 #include<conio.h>
 
 int carp(int d, int f, int g){
     return d*f*g;
     }
     void kare(int w){
     printf("%d nin karesi:%d",w,w*w);
          }
     main() {
            int a,b,c;
            printf("a:"); scanf("%d",&a);
            printf("b:"); scanf("%d",&b);
            printf("c:"); scanf("%d",&c);
        //   carp(a,b,c); 
           kare(carp(a,b,c));
           getch();
            }
