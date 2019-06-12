#include <stdio.h>
#include <conio.h>

int main(){
    FILE *read,*write;
    int a,b,i;
    unsigned char c,d;
    
    read = fopen("k.txt","r");
    write = fopen("t.txt","w");
    
          while(!feof(read)){ 
            fscanf(read,"%d",&a);
            for(i=15;i>=0 ;i--){
            fprintf(write,"%d ",(a>>i)&1);
            } 
                }

          fclose(read);
          fclose(write);
          getch();
          return 0;
          }
