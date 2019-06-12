#include<stdio.h>
#include<conio.h>
#include<math.h>
  bool ucgenmi(int a,int b,int c){
     /*  if(a+b>c && a+c>b && b+c>a && fabs(a-b)<c && fabs(a-c)<b && fabs(c-b)<a){
                return true;
                }else
                return false;*/
                return (a+b>c && a+c>b && b+c>a && fabs(a-b)<c && fabs(a-c)<b && fabs(c-b)<a)?true:false;
                }
                int main(){
                    int a,b,c;
                    printf("bir ucgenin kenarlarýný girniz");
                    scanf("%d%d%d",&a,&b,&c);
                    /*
                    if(ucgenmi(a,b,c))
                                       printf("ücgendir");
                                       else
                                       printf("ücgen degildir");*/
                    printf(ucgenmi(a,b,c)?"ücgendir": "ücgen degildir");
                                       
                    getch();
                    return 0;
                    }
