/*uslu sayi bulma*/

#include<stdio.h>
#include<conio.h>
int uslu(int a,int b){
    if(b==1)
    return a;
    else
    return uslu(a,b-1)*a;
}
int main(){
    int a,b;
    printf("sayi gir");
    scanf("%d%d",&a,&b);
    printf("%d",uslu(a,b));
    getch();
    return 0;
}
