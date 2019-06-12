 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 # define a 4
   main() {
          int k,gecici,i,j;
          int dizi[a]={73,56,34};
          //srlma
          for(i=0; i<=2; i++){
            for(j=0; j<=i; j++){
              if(dizi[i]<dizi[j]){
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
                  }
                }
             }
           //yazdrma
           for(k=0; k<=2; k++)     
          printf(" %d ",dizi[k]);
           getch();
            }
