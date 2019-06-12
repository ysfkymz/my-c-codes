/*1 den n e kadar olan sayilarin toplami*/
#include<stdio.h>
#include<conio.h>
int topla(int a){
    if(a==1) 
    return a;
    else
    return a+topla(a-1);
}
int main(){
    int a;
    printf("bir sayi giriniz");
    scanf("%d",&a);
    printf("%d",topla(a));
    getch();
    return 0;
}
