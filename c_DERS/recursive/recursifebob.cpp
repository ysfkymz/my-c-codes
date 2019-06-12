#include<stdio.h>
#include<conio.h>

int sonuc=0;

int ebob(int a,int b){
     int gecici;
     if(b>a ) { gecici=a; a=b ;b=gecici;}
     if(a%b==0) sonuc=b;
     else {a=a%b; ebob(a,b);}
     
    
}
int main(){
    int sayi,sayi2;
    printf("onluk taban da bir sayi giriniz");
    scanf("%d%d",&sayi,&sayi2);
    ebob(sayi,sayi2);
    printf("%d",sonuc);
    getch();
    return 0;
}
