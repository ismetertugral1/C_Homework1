#include"stdio.h"
#include"math.h"
int main(void)
{
int sayi;
int binlik_sayi,yuzluk_sayi,onluk_sayi,birlik_sayi;
	printf("Cozumlenecek 4 haneli sayiyi giriniz:");
  scanf("%d",&sayi);
    if(sayi<10000)/*Sayının fazla girme durumuna karşılık if-else yapısı*/
{ /*Sayıyı eksiltme yöntemiyle çözümledim*/
       binlik_sayi=sayi/1000 ; 
       yuzluk_sayi=(sayi/100)-(binlik_sayi*10);
       onluk_sayi=(sayi/10)-((binlik_sayi*100)+(yuzluk_sayi*10));
       birlik_sayi=(sayi-((binlik_sayi*1000)+(yuzluk_sayi*100)+(onluk_sayi*10)));
    printf("\tGirilen sayi:%d\n",sayi);
    printf("\t%d tane binlik sayi\n",binlik_sayi);
    printf("\t%d tane yuzluk sayi\n",yuzluk_sayi);
    printf("\t%d tane onluk sayi\n",onluk_sayi);
    printf("\t%d tane birlik sayi var\n",birlik_sayi); 
}
    else 
    printf("Sayinin basamagini fazla girdiniz!\n");
}
    
    
    
    
    
