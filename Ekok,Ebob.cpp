#include<stdio.h>
#include<conio.h>
   int main()  {
       int sayi1,sayi2,i;
       printf("iki sayi giriniz");
       scanf("%d%d",&sayi1,&sayi2);
       
       for(i=1;  i<=sayi1*sayi2; i++)
       {
                 if(i%sayi1==0 && i%sayi2==0)
                 {
                  printf("okek:%d\n",i);
                  break;
                  }
                  }
                 (sayi1>sayi2)? i=sayi2 : i=sayi1;
                  for(; i>0; i--)
                  {
                  if(sayi1%i==0 && sayi2%i==0)
                  {
                      printf("ebob:%d\n",i);
                      break;
                      }
                      }
                      getch();
                       return 0;
                       } 
