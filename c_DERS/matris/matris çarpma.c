 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
   main() {
          int A[2][2],B[2][2],C[2][2];
          int i,j,k,top;
          for(i=0; i<=2; i++){
                for(j=0; j<=2; j++){
                      printf("%d %d :",i,j); scanf("%d",&A[i][j]);
                      }}printf("******************************\n");
          for(i=0; i<=2; i++){
                for(j=0; j<=2; j++){
                      printf("%d %d :",i,j); scanf("%d",&B[i][j]);
                      }  
                }
                for(i=0; i<=2; i++){
                for(j=0; j<=2; j++){
                for(top=0, k=0; k<=2; k++){
                   top=top+ A[i][k]*B[k][j];}
                   C[i][j]=top;  
                   printf("% d ",C[i][j]);
                    }   printf("\n");}
          getch();
            }
