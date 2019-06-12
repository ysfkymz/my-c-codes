#include<stdio.h>
#include<conio.h>
int fakt(int a){
    if(a==0) return 1;
    else
    return a*fakt(a-1);
}
int main(){
    int a;  
    for(a=0;a<10;a++){
    printf("%d\n",fakt(a));
    }
    getch();
    return 0;
}
