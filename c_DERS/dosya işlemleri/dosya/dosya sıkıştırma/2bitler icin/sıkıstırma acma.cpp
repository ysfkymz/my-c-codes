#include <stdio.h>
#include <conio.h>

int main(){
    FILE *read,*write;
    int a,b,i;
    unsigned char c,d;
    
    read = fopen("k.txt","r");
    write = fopen("t.txt","w");
    
          while(!feof(read)){ 
                             fscanf(read,"%c",&a);
                             for(i=3;i>=0 && !feof(read);i--){
                             fprintf(write,"%d ",(a>>i*2)&3);
                             } 
                             }

          fclose(read);
          fclose(write);
          getch();
          return 0;
          }
