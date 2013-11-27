//////////////////Asal Sayı Buldurma///////////////////
#include <stdio.h>
int main()
{   int a;
	int i,j;
	int sayac=0;
    char secim,bas;
    bas://sayının pozitif ve 2den büyük girilmeme durumu başa dön(goto)
	printf("Pozitif bir sayi giriniz:");
	scanf_s("%d",&a);
	 if(a<=0 && a==1 && a==2) secim=0;
	
	for(i=2;i<a;i++)
{  
	 secim=1; for(j=2;j<i;j++)
  	{ 
	 	if(i%j==0)//asal sayı bulmak için mod
		  { secim=2;
	  	    break; 
		  } 
  	}
   if(secim==1) {sayac++; printf("Asal sayi:%d\n",j); }
     //seçimlerle yazdırma 
}  if(secim==0){
  printf("Lutfen pozitif ve 2'den buyuk sayi giriniz!\n"); 
  goto bas;//bidaha sayı almak için
}printf("%d:Tane asal sayi vardir.",sayac);
 return 0;
}
