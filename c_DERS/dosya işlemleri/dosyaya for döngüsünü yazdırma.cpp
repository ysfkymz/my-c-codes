#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    
    FILE  *out;
    int i;
    out=fopen("C:\\Users\\Hasan Ali\\Desktop\\ali.txt","w");
    if(out==NULL){
    printf("dosya acýlamadý");exit(1);}
    for(i=0;i<=555;i++){
    fprintf(out,"%d ",i);}
    fclose(out);

    
    getch();
    return 0;
    
    
    
    
    
    
    }
