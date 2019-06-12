#include<stdio.h>
#include<conio.h>
int nufus(int a){
    if(a==0)
    return 10000;
    else
    return nufus(a-1)*110/100;
}
int main(){
    printf("%d",nufus(5));
    getch ();
    return 0;
}
