 #include<stdio.h>
 #include<conio.h>
 int topla(int a){
     int i=0;
     int sonuc=0;
            donus:
            i++;
            sonuc+=i;
            if(i<a)
            goto donus;
            return sonuc;
     }
   main() {
int i;
       printf("i:");  scanf("%d",&i); 
       printf("%d",topla(i));  
           getch();
             }
