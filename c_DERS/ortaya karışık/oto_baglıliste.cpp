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
       unsigned long int fiyat;
       char renk[10];
       struct kayit *on,*arka;
       }KAYIT;
KAYIT *ilk=NULL, *son=NULL;       
       
       void ekle(KAYIT *);
                   main(){
            int secim;
            while(1){
                     secim=menuden_sec();
                     switch(secim){
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
                      }        
            
                      kayit(){
                          KAYIT *al;    
                          char kr;
                          do{
                             al=(KAYIT *)malloc(sizeof(KAYIT));  
                             if(!al){
                                  printf("yer yok!!!");   
                                  return;
                                     }
                         printf("adý: %s \n",al->ad);
                         printf("soyad: %s\n",al->soyad);
                         printf("marka: %s\n",al->marka);
                         printf("tipi: %s\n",al->tip);
                         printf("model: %d\n",al->model);
                         printf("renk: %s\n",al->renk);
                         printf("fiyat: %lu\n",al->fiyat);       
                            ekle(al);        
                            printf("baska kayit???E/H");
                             kr=getch();
                               }   while(kr=='E' && kr=='e');  
                          }      
                          
                        void ekle(KAYIT *p){
                             if(ilk!=0){
                                        son->arka=p;
                                        p->on=son;
                                        son=p;
                                        son->arka='\0';
                                   }
                              else{
                                   ilk=p;
                                   son=p;
                                   ilk->arka='\0';
                                   ilk->on='\0';
                                   }                            
                             }
                             
                          arama(){
                               int k;   
                               char marka[20];   
                               KAYIT *p;   
                               p=ilk;   
                               printf("marka????");    scanf("%9s",marka);
                               while(p){
                                    if(!strcmp(marka,p->marka)){
                                    goster(p);
                                    VUR;                        
                                   }
                                   p=p->arka;   
                                }
                            }  
                            
                           listele(){
                             int k;        
                             KAYIT *p;        
                             p=ilk;
                             while(p){
                               goster(p);  
                               p=p->arka;    
                               VUR; 
                              }        
                           } 
                          
                          goster(KAYIT *oto){
                         printf("adý: %s \n",oto->ad);
                         printf("soyad: %s\n",oto->soyad);
                         printf("marka: %s\n",oto->marka);
                         printf("tipi: %s\n",oto->tip);
                         printf("model: %d\n",oto->model);
                         printf("renk: %s\n",oto->renk);
                         printf("fiyat: %lu\n",oto->fiyat);            
                          }            
                          
                          silme(){
                          KAYIT *oto , *varmi();        
                          char ad[10];
                          char soyad[20];        
                          printf("silinecek isim? ");    scanf("%10s",ad);    
                          printf("soayd???");    scanf("%20s",soyad);
                          oto=varmi(ad,soyad);
                          if(!oto){
                             printf("böyle bir araba yok!!!");      
                             return;                                  
                             } else {
                              if(ilk==oto){
                                  ilk=oto->arka;
                                  ilk->on='\0';         
                                  } else {
                                  oto->on->arka= oto->arka;
                                  if(oto!=son) 
                                    oto->arka->on=oto->arka;
                                    else
                                    son=oto->on;     
                                  } 
                                  free(oto);    
                              }
                              puts("silindi...");
                          }
                          
                          KAYIT *varmi(char isim[], char soyisim[]){
                                KAYIT *p;
                                p=ilk;
                                while(p){
                                  if(!strcmp(p->ad,isim) && !strcmp(p->soyad,soyisim))
                                  return p;       
                                  p=p->arka;          
                                  }
                                return '\0';  
                           }    
                           
                           sakla(){
                            FILE *a;        
                            KAYIT *p;
                            if((a=fopen("otolar.txt","w"))==NULL){
                                puts("acilmadi!!!");                                 
                                return;                                  
                                }
                              p=ilk;
                              puts("saklaniyor...");         
                              while(p){
                               fwrite(p, sizeof(KAYIT)-2*sizeof(p), 1, a);
                               p=p->arka;        
                               }
                               fclose(a);
                           }
                           
                           yukle(){
                             FILE *a;        
                             KAYIT *p;
                             unsigned int tane;
                             int k,i;
                             if((a=fopen("otolar.txt","r"))==NULL){
                               puts("dosya acilmadi!!!");
                               return;                                    
                               }
                               fseek (a, 0, 2);
                               tane=ftell(a)/(sizeof(KAYIT)-2*sizeof(al));
                               fseek(a,0,0);
                               puts("yüklenyor...");      
                               for(k=0; k<tane ; k++){
                                al=(KAYIT *)malloc(sizeof(KAYIT));        
                                if(!al){
                                   printf("yer yok...");
                                   break;
                                   }   
                                  fread(al, sizeof(KAYIT)-2*sizeof(al), 1,a);
                                  ekle(al);      
                                }
                                fclose();
                           }
              
