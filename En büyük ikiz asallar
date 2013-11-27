///////////////En Büyük İkiz Asallar//////////////
#include<stdio.h>
int main()
{
	int gecici;
	int i,j;//döngüler için
	int sayac;//sayaç yarmıyla ifleri sağlama
	int son;//goto için son
	
	for(i=100;i>1;i--)
	{   sayac=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			sayac++;
		}
		if(sayac==0)
		{  //Asalları bulduktan sonra 2 fazlası ve 2 eksiği ikizlik sağlar
			if(gecici-2==i||gecici+2==i){
			printf("En buyuk ikiz asallar:%d,%d\n\n",i,gecici);  goto son;
			} 
			gecici=i; //Önceki sayıyı Bulundurma
			//İlk Bulduğu sayı En büyüktür
		}
	}son:  printf("Gule Gule\t\2\2\n\n");
	return 0;
}
