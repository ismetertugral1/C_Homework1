#include<stdio.h>  //standart c kütüphanesi
#include<locale>  //Dil karakter sınıfları
int main()     //c programlarında olmazsa olmaz fonksiyon :)
{
	setlocale(LC_ALL,"TURKISH"); //Türkçe karakterler için,locale dosyasını include etmek gerekir.
	int x,tahmin;                 //x,y ve tahmin değişkenlerini tamsayı olarak tanımlıyoruz main fonksiyonu içinde yerel olarak.
	srand ( time(NULL) );       //Program çalıştığı anda bilgisayarın zaman değerine göre rassallaştırıyo sayıları
	x = rand()%99 + 1;      //0-99 aralığında rand() fonksiyonu ile rastgele bir sayı oluşturup 1 ekliyoruz,sayı 1-100 aralığında oluyor,değiştirebilirsiniz.
	do
	{
		printf("Tahmin et: \n");    //printf fonksiyonu ekrana yazdırmak içindir, \n ise bir alt satıra geçmek için kullanılır.
		scanf("%d",&tahmin);      //scanf fonksiyonu ile klavyeden girilen değeri okuturuz.
		if(tahmin<x)                  //girilen değer rastgele oluşmuş sayıdan küçükse
			printf("Biraz daha büyük bir sayı gir...\n"); 
		else if(tahmin>x)          //girilen değer rastgele oluşmuş sayıdan büyükse
			printf("Biraz daha küçük bir sayı gir...\n");
	}while(tahmin!=x);        //sayı bulunursa döngü biter program kapatılır
	printf("\n\tTebrikler Buldunuz \2\n\n");
}
