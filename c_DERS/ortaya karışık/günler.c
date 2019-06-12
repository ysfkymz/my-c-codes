 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 
 main() {
      /*      char *gunler[4]={"asli","dsa","rfre","dewd"};
            gunler[0]="gfds";
            printf("%s",gunler[0]);
           printf("%d\n ",strlen(gunler));          */
           char *dizi[7];
           int i;
           for(i=1; i<=7 ; i++)
           {
                 printf("haftann %d.ninci günü:",i);
                 scanf("%s",&dizi[i]);
                 
                 }
        int k;
        for(k=1; k<=7; k++){
            puts(dizi[k]);
              }   
         getch();
          }
