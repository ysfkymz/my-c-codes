#include<stdio.h>
#include<conio.h>
int fonk(int a){
    if(a%3==0){
    return a;}
    else if(a%3==1){
    return (a-4);}
    else if(a%3==2){
    return (a*a - a + 1);
        }
    }
    int k(int b){
       return (2*b)+1; 
    }

        int main(){
            int a,b,sonuc=0;
            for(a=1;a<=5;a++){
            b=k(a);
            b=fonk(b);
            sonuc=sonuc+b;
            }
    printf("An dizisine ıloloıgoore A2n +1 dizisinin ilk bes eleman toplami  =  %d",sonuc);

    
    
    
    getch();
    return 0;}
