#include"stdio.h"/*Kullanıcı 
tarafından girilen N adet sayının ortalamasını ve ortalamaya en yakın olan sayıyı ve bu 
sayının dizideki pozisyonunu görüntüleyen C programı*/
int main()
{
 float a[BUFSIZ],ort,top,fark[BUFSIZ],min;
 int N,indis,i;
 printf("Kac sayi gireceksiniz:");
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
 	printf("%d Sayi:",i+1);
 	scanf("%f",&a[i]);
 	top+=a[i];
 }
 ort=top/N;
 printf("Ortalama:%f\n",ort);

 for(i=0;i<N;i++)
 {
  if(ort>a[i])
  fark[i]=ort-a[i];
  else
  fark[i]=a[i]-ort;  	
 }
 min=a[0];
 for(i=0;i<N;i++)
 {
 	if(fark[i]<min){
 	min=fark[i];
 	indis=i;}
 }
 printf("Minimum fark:%f\n",min);
 printf("Kacinci eleman:%d\n",indis+1);
 printf("Ortalamaya en yakın sayı:%f\n",a[indis]);
return 0;
}
