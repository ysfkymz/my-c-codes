#include<stdio.h>
#include<conio.h>
#define MAX 100
# define VUR printf("devam etmek için bir tusa basin.\n"); getch();
typedef struct kayit{
       char ad[10];
       char soyad[20];
       char marka[20];
       char tip[10];
       int model;
       int fiyat;
       char renk[10];
       }KAYIT;
       
       KAYIT oto[MAX]= {0};
       
       menuden_sec(){
              int i;
              char *menu[7]={"1-oto ekle","2-oto ara","3-oto listele","4-satilani sil","5-dosyaya sakla","6-dosyadan yukle","7-cýk"};
              puts("\t********MENU********");
              for(i=0; i<7; i++)
                    printf("\t%s\n",menu[i]); 
                    do{
                    printf("\t secimin:");
                    scanf("%1d",&i);                                 
                    } while(i<1 || i>7);        
                   return i;
                      }  } }
                      
                       kayit(){
                     int indis;
                     char kr;
                     do{
                          printf("indis:"); scanf("%d",&indis);
                         indis=ver();
                          if(indis<0){
                                 printf("liste dolu!!!!");   
                                    return;
                             }
                            printf("ad:");     scanf("%10s",oto[indis].ad);  
                            printf("soyad:");  scanf("%20s",oto[indis].soyad);                
                            printf("tip:");   scanf("%10s",oto[indis].tip);
                            printf("model:");  scanf("%4d",oto[indis].model);
                            printf("renk:");  scanf("%10d",oto[indis].renk);
                            printf("fiyat:");  scanf("%10d",oto[indis].fiyat);
                            printf("baþka kayit yapacak misinz? E/H \n");
                            kr=getch();
                          }while(kr='E' || kr='e');
                     }
                           
             ver(){
                    int bos;
                    for(bos=0; oto[bos].ad[0] && bos<MAX; bos++)
                    if(bos<MAX) return bos;
                    else return -1;
                    }
                
                
              arama(){
                      int k;
                      char marka[20];
                      printf("hangi marka?");  scanf("%9s",marka);
                      for(k=0; k<MAX; k++)
                       if(oto[k].ad[0])
                       if(!strcmp(oto[k].marka,marka)){
                         goster(k);
                        VUR;                              
                         }
                      }      
                      
              listele(){
                        int k;
                        for(k=0; k<MAX; k++)
                         if(oto[k].ad[0])
                         goster(k);
                         vur;  
                   }

              goster(int kno){
                         printf("adý: %s \n",oto[kno].ad);
                         printf("soyad: %s\n",oto[kno].soyad);
                         printf("marka: %s\n",oto[kno].marka);
                         printf("tipi: %s\n",oto[kno].tip);
                         printf("model: %d\n",oto[kno].model);
                         printf("renk: %s\n",oto[kno].renk);
                         printf("fiyat: %lu\n",oto[kno].fiyat);                         
                         }
              
              silme(){
                      int k,indis;
                      char ad[10],soyad[20];
                      printf("silmek istedgniz otonun sahibi:");
                      scanf("%10s",ad);
                      printf("soyadi:");   scanf("%20s",soyad);
                      indis=varmi(ad,soyad);
                      if(indis=-1){
                          printf("yok!!!");
                          return;
                          }else{
                          puts("sildim...");                                    
                          oto[indis].ad[0]='\0';
                            }                     
                       }
              varmi( char isim[], char soyisim[]){
                      int k;
                      for(k=0; k<MAX; k++)
                      if(oto[k].ad[0])
                      if(!strcmp(oto[k].ad,isim) && !strcmp(oto[k].soyad,soyisim))
                      return k;
                      else
                      return -1;
                      }
                      
                sakla(){
                      FILE *a;  
                        int k;
                        if( (a=fopen("oto.txt", "+w") )== NULL ){
                            puts("dosya acilmadi!!!!");
                            return;
                            }
                        puts("sakliyorum...");
                        for(k=0; k<MAX; k++)
                        if(oto[k].ad[0])
                        fwrite(&oto[k],sizeof(KAYIT),1,a);
                        fclose(a);
                        }      
                  
                 yukle(){
                         FILE *a;
                         unsigned int tane;
                         int k,i;
                         if( (a=fopen("oto.txt","+r"))==NULL ){
                             puts("dosya acilmadi!!!");
                             return;                             
                             }
                         fseek(a,0,2);
                         tane=ftell(a)/sizeof(KAYIT);
                         fseek(a,0,0);
                         puts("yukuluyorum...\n");
                         for(k=0; k<tane; k++){
                                  i=ver();
                                  if(i==-1)
                                  printf("yer kamadi!!!!");
                                  break;
                                  }
                             fread(&oto[i],sizeof(KAYIT),1,a);     
                         } 
                     fclose(a);
                     }         
                      
       main() {
              int secim;
              while(1){
              secim=menuden_sec();
              switch(secim) {
                     case 1:
                          kayit();       
                          break;
                     case 2:
                          arama();
                          break;
                     case 3:             
                          listele();
                          break;
                     case 4:
                          silme();
                          break;
                     case 5:
                          sakla();
                          break;
                     case 6:
                          yukle();
                          break;
                     case 7:
                          puts("yanlýs secim yaptýnýz...!!!");                    
                        //  default;   
                        exit();
                            }              
              }
       }
              
              
                      
            
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
