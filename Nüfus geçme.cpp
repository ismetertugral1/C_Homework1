/////////////A şehrinin nüfuzunun B şehrininkini Geçme Durumu///////////////
#include <stdio.h>
#include <math.h>
int main()
{  //A şehrinin nüfuzunun B şehrininkini Geçme Durumu
	int a=10000000;
	int b=40000000;
	int i;
	printf("A ilk sayisi:%d\nB ilk sayisi:%d",a,b);
	for(i=0;;i++)
	{
	a+=((a*25)/100);
	b+=((b*12)/100);
	if(a>b) break;
	}
   printf("\n\nA son olarak:%d\nB son olarak:%d\n",a,b);
   printf("\n%d:yil sonra gecer\n",i);
   return 0;
}

/*#include <stdio.h>
#include <math.h>
int main()
{  //A şehrinin nüfuzunun B şehrininkini Geçme Durumu
	int a=10000000;
	int b=40000000;
	int i=0;
	printf("A ilk sayisi:%d\nB ilk sayisi:%d",a,b);
	while(a<b)
	{
	a+=((a*25)/100);
	b+=((b*12)/100);
	i++;
	} 
	i-=1;//i değeri 1 fazla çıkması durumunda
   printf("\n\nA son olarak:%d\nB son olarak:%d\n",a,b);
   printf("\n%d:yil sonra gecer\n",i);
   return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int main()
{  //A şehrinin nüfuzunun B şehrininkini Geçme Durumu
	int a=10000000;
	int b=40000000;
	int i=0;
	printf("A ilk sayisi:%d\nB ilk sayisi:%d",a,b);
	do{
	a+=((a*25)/100);
	b+=((b*12)/100);
	i++;
	}while(a<b);
	i-=1;
   printf("\n\nA son olarak:%d\nB son olarak:%d\n",a,b);
   printf("\n%d:yil sonra gecer\n",i);
   return 0;
}*/
