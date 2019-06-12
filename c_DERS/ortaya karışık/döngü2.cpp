 #include<stdio.h>
 #include<conio.h>
  void sayi(int dizi[]) {
         int i,t=0,ort;
         for(i=1; i<=5; i++){
           t=t+dizi[i];
           ort=t/5;
           }
           printf("ortalama:%d\n",ort);
             }
        
    main() {
           int x;
           donus:
           printf("sayi:"); scanf("%d",&x);
           sayi();
           if(x!=0)
           goto donus;
           getch();
             }
