 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
   main() {
          int dizi[2][2];
          int i,j;
          for(i=0; i<2; i++){
                   for(j=0; j<2; j++){
             printf("%d %d.eleman:",i,j); scanf("%d",&dizi[i][j]);
             }
          }      
          for(i=0; i<2; i++){
          for(j=0; j<2; j++){
             printf("%d ",dizi[i][j]);
             }
             printf("\n");} 
           getch();
            }
