#include<stdio.h>
#include<conio.h>
int main(void) {
    int dogru=1 ,yanlis=0;
    printf("  p    q     pVq \n");
    printf("-----------------\n");
    printf("%3d%5d%7d \n",dogru,dogru,!dogru||dogru);
    printf("%3d%5d%7d \n",dogru,yanlis,!dogru||yanlis);
    printf("%3d%5d%7d \n",yanlis,dogru,!yanlis||dogru);
    printf("%3d%5d%7d \n",yanlis,yanlis,!yanlis||yanlis);
    getch();
    return 0;
    }
