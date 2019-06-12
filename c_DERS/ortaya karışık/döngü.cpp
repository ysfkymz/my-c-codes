 #include<stdio.h>
 #include<conio.h>
 
        
 main(){
         int k;
        float x,toplam=0;
          while(1){
          
           k++;  
           scanf("%f",&x);
           if(x==0)
           break;
           toplam+=x;
           if(k%5==0){
           printf("ortalama %f",toplam/5);
           toplam=0;
           }}
                 
          
          
        getch();
       }
/*
  int k;
        float x,toplam=0;
          donus:
          
           k++;  
           scanf("%f",&x);
           if(x==0)
           goto donus1;
           toplam+=x;
           if(k%5==0){
           printf("ortalama %f",toplam/5);
           toplam=0;
           }
           goto donus;
          donus1: 
                 

*/
