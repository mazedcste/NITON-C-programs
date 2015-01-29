#include<stdio.h>
#include<string.h>
int main()
{

   char st[100];
   long i,n,l;

   printf("Enter any binary number: ");
   scanf("%s",st);

   n=0;
   l=strlen(st);

   for(i=0; i<l; i++)
   {
      n=n*2+st[i]-48;
   }

   printf("Equivalent decimal number is : %ld",n);
   getch();

   return 0;
}
