 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
   main() {
          int dizi[10];
          int i,j,eb;
          for(i=1; i<=10; i++){
             printf("%d. sayi:",i); 
             scanf("%d",&dizi[i]);  
              }
          eb=dizi[1];
          for(j=1; j<=10; j++){
          if(eb>dizi[j])
          eb=dizi[j];
              } 
          printf("en buyuk: %d ",eb);
   getch();
            }
