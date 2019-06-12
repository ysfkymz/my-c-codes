#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    
    FILE  *out;
    int i;
    char x[50];
    out=fopen("C:\\Users\\Hasan Ali\\Desktop\\alii.txt","w");
    if(out==NULL){
    printf("dosya acýlamadý");exit(1);}
    scanf("%s",x);
    fprintf(out,"%s",x);
    fclose(out);

    
    getch();
    return 0;
}
