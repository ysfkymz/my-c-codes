#include<stdio.h>
#include<conio.h>

int main(){
    int i,n;
    float A[3][3];
    for(i=0; i<3; i++){
    printf("numara:"); scanf("%f",&A[i][0]);
    printf("vize:"); scanf("%f",&A[i][1]);
    printf("final"); scanf("%f",&A[i][2]);
    }
    for(i=0; i<3; i++)
    if(60<=(A[i][1]*0.4+ A[i][2]*0.6)){
         printf("numara:%f notu:%f",A[i][0],(A[i][1]*0.4+ A[i][2]*0.6));
         printf("\n");
         }
         
    getch();
    return 0;
    }
