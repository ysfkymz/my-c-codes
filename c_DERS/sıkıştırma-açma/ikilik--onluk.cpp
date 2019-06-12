#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
       int i,a=128,top=0;
       char A[50];
       printf("ikilik tabanda sayi:");  scanf("%s",A);
       for(i=0; i<8 ;i++){
         top+=(A[i]-48)*a;
         a=a>>1;
         }
         printf("%d",top);
       getch();
       return 0;
       }
