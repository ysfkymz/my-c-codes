#include <stdio.h>
#include <math.h>
 int	perfect(int x); //protatip 
int main()
{
	int d,i; 
	printf("sayi gir>>");
	scanf("%d",&d);

	for(i=1;i<d;++i)  //verilen say�ya kadar kontrol ediyor ve if de�eri do�ruysa ekrana yazd�r�yor.
	{
		if(perfect(i)==1) //say�y� fonksiyona g�nderiyor ve de�erlendiriyor. Do�ruysa alt sat�r i�lem g�r�yor.
		printf("%d\n",i);
	}	
	getchar();
	return 0;
}

int	perfect(int x){
                     
	int b,i,geri,toplam=0;
	b=floor(x/2);  // say�n�n yar�s�n� al�yor. 100 yar�s� 50'dir. 99 yar�s� 49.5'tur ama floor ile 49 kabul ederek s�k�nt�s�z �arpanlar� bulabiliriz.
	for(i=1;i<b+1;i++)
	{
		if( x%i==0 )
	     toplam+=i;  //�arpanlar� mod=0 ile bulduk ve toplam de�i�keninde saklad�k. 10 say�s� i�in 1+2+5 = 8 = toplam gibi.
		
		
	}
	if(toplam==x)
	geri=1;
	else
	geri=0;
	
	return geri;

	}     

