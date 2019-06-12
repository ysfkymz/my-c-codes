#include <stdio.h>
#include <conio.h>

int main(){
    FILE *read,*write;
    int a,b;
    char c,d;
    
    read = fopen("k.txt","r");
    write = fopen("t.txt","w");
    
          while(!feof(read)){
                             fscanf(read,"%c",&a);
                             b=a;
                             c =a>>4;    
                             d =b & 15;  
                             if(feof(read))
                             break;
                             fprintf(write,"%d %d ",c,d);
                             }

          fclose(read);
          fclose(write);
          getch();
          return 0;
          }
