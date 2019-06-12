 #include<stdio.h>
 #include<conio.h>
 
 void para(int a){
      int x,y,z;
      if(a%5==0)
      {
         x=a/20;
         a=a-(20*x);
         y=a/10;
         a=a-(y*10);
         z=a/5;  
          a=a-(z*5); 
         printf("%dyirmilik  \n%donluk \n%dbeslik",x,y,z);
                }else
        printf("5in katı olsun !!!!");                        
      }
  
 main() {
        int p;
        printf("para miktari: "); scanf("%d",&p);
        para(p);
         getch();
             }
