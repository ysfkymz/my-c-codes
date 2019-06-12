 #include<stdio.h>
 #include<conio.h>
  void sayi(int a) {
         int i;
         for(i=1; i<=a; i++){
           if(a%i==0){
           printf("%d\n",i);
           }
             }
        }
    main() {
           int x;
           donus:
           printf("x:"); scanf("%d",&x);
           sayi(x);
           if(x!=0)
           goto donus;
           getch();
             }
