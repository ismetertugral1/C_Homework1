#include <stdio.h>
 
int main()
{
   int n, reverse = 0, temp;//reverse dönen değerle sağdan sola ters çevirme
                            //temp geçici sayı düzenlemesi
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&n);
 
   temp = n;//12321
 
   while( temp != 0 )
   {
      reverse = reverse * 10;//0
      reverse = reverse + temp%10;//1=0+1
      temp = temp/10;//123
   }
 
   if ( n == reverse )
      printf("%d: palindromik sayidir.\n", n);
   else
      printf("%d: polindromik sayi değildir.\n", n);
 
   return 0;
}
