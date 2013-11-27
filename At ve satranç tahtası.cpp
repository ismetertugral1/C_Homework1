//ATIN Ve SANTRANÇ TAHTASI
#include <stdio.h>
#include <conio.h>

void main()
{
	int x,y,i,j;
	char a[20][20]; //Atın gidebileceği noktalar bazen santranç tahtasını aşıyor bu yüzden dizi değerlerini yüksek tutuyoruz.
	printf("ATIN satir sayisi:"); //Satır sutun sayılarını giriyoruz.
	scanf_s("%d",&x);
	printf("ATIN sutun sayisi:");
	scanf_s("%d",&y);
	
	for(i=0;i<8;i++) //Dizinin alayına - ifadesini atıyoruz.
		for(j=0;j<8;j++)
			a[i][j]='-';
	a[x-2][y+1]='*'; //Atın gidebileceği yerlere * atıyoruz.
	a[x-1][y+2]='*';
	a[x+1][y+2]='*';
	a[x+2][y+1]='*';
	a[x+2][y-1]='*';
	a[x+1][y-2]='*';
	a[x-1][y-2]='*';
	a[x-2][y-1]='*';
	printf("\n"); 

	for(i=0;i<8;i++) //Atın haritasını burada yazdırıyoruz.
	{
		for(j=0;j<8;j++)
		{printf("%c ",a[i][j]);}
		printf("\n");
	}
	_getche();
}
