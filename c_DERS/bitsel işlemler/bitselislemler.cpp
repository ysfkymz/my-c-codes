#include<stdio.h>
#include<conio.h>

int main()
{
    int a=5,b=3,c=0,c1=0;
                    // printf("%d\n",a|b);   101  110   101
                    // printf("%d",a&b);     011  011   110
    printf("%d %d\n",a,b);    //             110  101   011 
    a=a^b;
    b=b^a;
    a=a^b;
    printf("%d %d\n",a,b);  
    c=c|6;
    c=c<<4;
    c=c|10;
    printf("%d \n",c);
    c1=c&15;
    c=c>>4;
    printf("%d %d",c1,c);
    
    
    //0000 1010      0000 1010     0110 1010   >>4 0000 0110 
    //0000 0110 <<4  0110 0000     0000 1111                  
    //        (veya) 0110 1010  ve)0000 1010
    
    getch();
    return 0;
    }
