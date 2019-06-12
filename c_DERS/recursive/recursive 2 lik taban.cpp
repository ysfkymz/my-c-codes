#include<stdio.h>
#include<conio.h>
void iki(int sayi){
    if(sayi/2>=2) iki(sayi/2);
    else{printf("%d",sayi/2);}
    printf("%d",sayi%2);
}
    int main(){
        int sayi;
        printf("onluk taban da bir sayi giriniz");
        scanf("%d",&sayi);
        iki(sayi);
        getch();
        return 0;
    }
