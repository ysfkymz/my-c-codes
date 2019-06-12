#include"stdio.h"
#include"conio.h"

void taban(int sayi,int n){
    if(sayi/n>=n)  {
    taban(sayi/n);}
    else{
    printf("%d",sayi/n);
    printf("%d",sayi%n); }
}

int main(){
	int a,i;
	 printf("tamsayi:"); scanf("%d",&a);
	 printf("taban:");  scanf("%d",i);
      taban(a,i);
       getch();
return 0;
}

