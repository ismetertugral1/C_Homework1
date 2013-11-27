////////////////////Mükemmel Sayı Buldurma//////////////////
#include"stdio.h"
#include"math.h"
int main()
{   int i,j,top;

   for(i=1;i<=1000;i++)//1000'e kadar döngü bölenle ilgili
      {
         top=0;               
         for(j=1;j<i;j++) 
         {
             if(i%j==0)//bölenlerini buluyor
             {
                top = top + j;       
             }       
         }     
         
         if(top==i)//bölenlerinin kendisine eşit olma durumu
         {
            printf("%d sayisi mukemmel sayidir.\n",i);        
         }   
    
      }return 0;
}
