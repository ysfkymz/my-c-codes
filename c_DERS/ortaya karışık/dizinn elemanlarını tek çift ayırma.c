#include<stdio.h>
#include<conio.h>
main(){
     int A[100],B[100],C[100],i,x=0,y=0,N;
     printf("eleman sayisi:\n"); scanf("%d",&N);
     printf("A dizisi:\n");
     for(i=0; i<N; i++){
           printf("%d.eleman:",i+1); scanf("%d",&A[i]);
           }
     for(i=0; i<N; i++){
           if(A[i]>0){
                x++;
                B[x-1]=A[i];
                }
            if(A[i<0]) {
                 y++;
                 C[y-1]=A[i];
                 }    
           }
           printf("B dizisi:\t");
           for(i=0; i<x; i++)
           printf("%d\n",B[i]);
           printf("C dizisi: \n");
           for(i=0; i<y; i++)
           printf("%d",C[i]);
     getch();}
