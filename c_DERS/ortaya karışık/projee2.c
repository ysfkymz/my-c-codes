    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    yeni_kayit()
    {
                FILE *dosya;
                char ad[30],soyad[30],no[15];
                if ((fp=fopen("rehber.txt","a"))==NULL)
                 exit(0);
    }
    else
        {
    printf("________________________________\n");
    printf("AD SOYAD GIRINIZ :\n");
    scanf("%s%s",ad,soyad);
    fprintf(fp,"%s %s\n",ad,soyad);
    printf("TELEFON NUMARASI GIRINIZ :\n");
    scanf("%s",&no);
    fprintf(fp,"%s\n",no);
         }
    fclose(dosya);
return 0;
}
arama()
{
       FILE *dosya;
       char ad[30] = "0" ,soyad[30] = "0", ara_a[30] = "0",ara_s[30] = "0",no[15];
       
