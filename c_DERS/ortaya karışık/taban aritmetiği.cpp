#include<stdio.h>
#include<conio.h>
int A,B,K,N,T[99],i,s=0;
main(){
       printf("tamsayi:"); scanf("%d",&A);
       printf("taban:");  scanf("%d",&N);
       while(A>N-1){
               B=A/N;  
                K=A%N;   
                s++;
               T[s-1]=K;  
                A=B;
               }
               s++;
               T[s-1]=B;
            printf("\n %d tabanindaki karsiligi:",N);
            for(i=s-1; i>=0; i--)
            printf("%d",T[i]);
       getch();}
