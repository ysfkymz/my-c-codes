 #include<stdio.h>
 #include<conio.h>
  main() {
         int a,i,nt=0,pt=0,ps=0,ns=0;
         for(i=1; i<=10; i++){
               printf("sayi:"); scanf("%d",&a);
               if(a<0)
               {
                    ns++;
                    nt=nt+a;  
                      }
                      else{
                      ps++;
                      pt=pt+a;
         }
               }
               printf("%d tane p.toplam : %d \n ",ps,pt);
               printf("%d tane n.toplam : %d ",ns,nt);  
         getch();
             }
