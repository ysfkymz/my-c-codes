#include<stdio.h>
#include<conio.h>
main(){
       int i,j,N,g,A[100];
       printf("dizinin eleman sayisi:"); scanf("%d",&N);
       for(i=0; i<=N; i++){
                printf("A[%d]=",i); scanf("%d",&A[i]);
                }
       for(i=1; i<=N; i++){
             for(j=1; j<=N; j++){
                   if(A[i]<A[j]){
                       g=A[i];
                       A[i]=A[j];
                       A[j]=g;
                       }
                   }
             }
       printf("sirali dizi:\n"); printf("************\n");
       for(i=0;i<=N;i++){
             printf("A[%d]:%d\n",i,A[i]);
             }
       getch();
       }
