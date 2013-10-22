#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
 int hesap_no1=30,hesap_no2=40;
 int sifre1=33,sifre2=44, sayac=0;
 int gecici_no,gecici_sifre=1;
 int secim,deneme_sifre1,param ;
 int top_param1=0,top_param2=0, deneme_sifre2,gecici_sifre1;
 int para_cek,akt1,akt2;
 char harf,harf2;

//Kullanıcı adı yerine Hesap no olarak aldım
baslangic_noktasi: // goto yu buraya çağırır...
  printf("\tHOSGELDINIZ\n");            
  printf("\tBanka hesap numaranizi giriniz: ");       
  scanf("%d",&gecici_no);



//while içindeki koşul doğru olduğu müddetçe döndürdüm:Hesap kontrol
while(gecici_no!=hesap_no1 && gecici_no!=hesap_no2)
{
if(gecici_no==-1)//Hesap nosu yanlışsa 
  break;
  printf("\tYanlis hesap numarasi girdiniz!\n");
  printf("\tLutfen tekrar deneyiniz: \n");
  scanf("%d",&gecici_no);

}

if(gecici_no==hesap_no1)//Hesap no doğruysa
{
while(gecici_sifre!=sifre1)
{
if(sayac==3)//Şifre 3defa yanlış girilmesi durumu
{
  printf("\tHesabiniz kilitlendi\n");
  printf("\tBanka yoneticinizle gorusunuz\n");
goto baslangic_noktasi;

}
  printf("\n\tSifrenizi giriniz: ");
  scanf("%d",&gecici_sifre);
sayac++;
} // while ın ... 

while(secim!=7)//seçim 7 hariç olduğunda döndür
{
  printf("\n\tISLEMLER MENUSU\n");
  printf("\t1. Sifre Degistir\n");
  printf("\t2. Para Yatirma\n");
  printf("\t3. Para Cekme\n");
  printf("\t4. Bakiye\n");
  printf("\t5. Para Transferi\n");
  printf("\t6. Hesap girisi\n");
  printf("\t7. Cikis\n");
  printf("\t>>Seciminiz");
  scanf("%d",&secim);
if(secim==1)
{
  printf("\tYeni Sifreniz");
  scanf("%d",&deneme_sifre1);
  printf("\n\tYeniden sifrenizi giriniz");
  scanf("%d",&deneme_sifre2); 
while(deneme_sifre1!=deneme_sifre2)
{
  printf("\n\tEslesme Yapilamadi\n");
  printf("\tYeniden sifrenizi giriniz:");
  scanf("%d",&deneme_sifre2); 
}//while(deneme)
if(deneme_sifre1==deneme_sifre2)
{
   sifre1=deneme_sifre1;
  printf("\tSifreniz Degistirilmistir\n");
} 

}//if(secim==1)
if(secim==2)
{
  printf("\tYatirilacak Miktar: ");
  scanf("%d",&param); 
   top_param1+=param;
  printf("\tParaniz Hesabiniza Yatirilmistir.\n"); 
  printf("\tHesabinizdaki Para: %d\n",top_param1); 
} // if (secim==2)
if(secim==3)
{

  printf("\tCekilecek para miktari: ");
  scanf("%d",&para_cek); 

if(top_param1>para_cek)
{
  printf("\tCekilen para miktari: %d\n",para_cek);
   top_param1=(top_param1)-(para_cek);
  printf("\tHesabinizda %d kalmistir.\n",top_param1); 

}

if(top_param1<para_cek) 
{
  printf(">>Bankaya borclanacaksiniz devam etmek istiyormusunuz(E(e)/H(h)): ");
  scanf("%2c",&harf2,&harf);

switch(harf)
{
  case 'e':
  case 'E': top_param1=(top_param1)-(para_cek);
   printf("\tCekilen tutar %d Bankaya %d borclandiniz.\n",para_cek,top_param1);
  break;
  case 'h':
  case 'H': printf("\tIsleminiz iptal Olmustur..\n");
} // switch
}// if(top_param)
} // if(secim==3)
if(secim==4)
{
  printf("\tBanka Hesap Numaraniz: %d\n",hesap_no1);
  printf("\tBakiyeniz: %d",top_param1); 
} //if (secim==4)
if(secim==5)
{
  printf("\tTranfer miktari: ");
  scanf("%d",&akt1);
if(top_param1>akt1)
{
  printf("\tAktarilan para miktari:%d\n",akt1);
   top_param1=(top_param1)-(akt1);
   top_param2=(top_param2)+(akt1);
  printf("\tHesabinizda %d kalmistir.\n",top_param1); 
}
if (top_param1<akt1)
  printf("\tAktarilamaz miktar!");
}//if(seçim==5)
if(secim==6)
goto baslangic_noktasi;
if(secim==7)
  printf("\t\tGULE GULE.!!!\n");


}//while(secim) 
}//if(1.if)



//2.hesapta aynı mantık
if(gecici_no==hesap_no2) // hesap 2.nin kontrolu
{
while(gecici_sifre!=sifre2)
{
if(sayac==3)
{
  printf("Hesabiniz kilitlendi\n");
  printf("Banka yoneticinizle gorusunuz\n");
goto baslangic_noktasi;

}
  printf("\tSifrenizi giriniz:");
  scanf("%d",&gecici_sifre);
sayac++;
} // while ın ... 


while(secim!=7)
{
  printf("\nISLEMLER MENUSU\n");
  printf("1. Sifre Degistir\n");
  printf("2. Para Yatirma\n");
  printf("3. Para Cekme\n");
  printf("4. Bakiye\n");
  printf("5. Para Transferi\n");
  printf("6. Hesap girisi\n");
  printf("7. Cikis\n");
  printf("--Seciminiz");
  scanf("%d",&secim);
if(secim==1)
{
  printf("Yeni Sifreniz\n");
  scanf("%d",&deneme_sifre1);
  printf("Yeniden sifrenizi giriniz\n");
  scanf("%d",&deneme_sifre2); 
while(deneme_sifre1!=deneme_sifre2)
{
  printf("Eslesme Yapilamadi\n");
  printf("Yeniden sifrenizi giriniz\n");
  scanf("%d",&deneme_sifre2); 
}//while(deneme)
if(deneme_sifre1==deneme_sifre2)
{
sifre2=deneme_sifre1;
  printf("Sifreniz Degistirilmistir\n");
} 

}//if(secim)
if(secim==2)
{
  printf("Yatirilacak Miktar: ");
  scanf("%d",&param); 
   top_param2+=param;
  printf("Paraniz Hesabiniza Yatirilmistir.\n"); 
  printf("Hesabinizdaki Para: %d\n",top_param2); 
} // if(secim==2)
if(secim==3)
{

  printf("Cekilecek para miktari: ");
  scanf("%d",&para_cek); 

if(top_param2>para_cek)
{
  printf("Cekilen para miktari: %d\n",para_cek);
   top_param2=(top_param2)-(para_cek);
  printf("Hesabinizda %d kalmistir.\n",top_param2); 

}

if(top_param2<para_cek) 
{
  printf(">>Bankaya borclanacaksiniz devam etmek istiyormusunuz(E(e)/H(h)): ");
  scanf("%2c",&harf2,&harf);

switch(harf)
{
  case 'e':
  case 'E': top_param2=(top_param2)-(para_cek);
   printf("Cekilen tutar %d Bankaya %d borclandiniz.\n",para_cek,top_param2);
  break;
  case 'h':
  case 'H': printf("Isleminiz iptal Olmustur..\n");
} 

}// if(top_param)
} // if(secim==3)
if(secim==4)
{
  printf("Banka Hesap Numaraniz: %d\n",hesap_no2);
  printf("Bakiyeniz: %d",top_param2); 
}// if(secim==4)
if(secim==5)
{
  printf("\tTranfer miktari: ");
  scanf("%d",&akt2);
if(top_param2>akt2)
{
  printf("\tAktarilan para miktari:%d\n",akt2);
   top_param2=(top_param2)-(akt2);
   top_param1=(top_param1)+(akt2);
  printf("\tHesabinizda %d kalmistir.\n",top_param2); 
}
if (top_param2<akt2)
  printf("\tAktarilamaz miktar!");
}
if(secim==6)
goto baslangic_noktasi;
if(secim==7)
  printf("GULE GULE.!!!\n");

}//while(secim) 
}//2.if 

  printf("\n\t.END.\n\n");
  system("PAUSE");
return 0; 
}
