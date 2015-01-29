//evaluate maximum and minimum of an ara...
#include <stdio.h>
int main ()
{
   int len;
   printf("Type array length: ");
   scanf("%d", &len);
   int i, n;
   int ara[len];

   printf("Type the array: \n");
   for(i = 0; i != len; i++) scanf("%d", &ara[i]);
   printf("you typed: ");
   for (i = 0; i != len; i++) printf(" %d ", ara[i]);
   printf("\n");

   i = 0; n = ara[i];
   while (i+1 != len) {
      if(n < ara[i+1]) n = ara[i+1];

   i++;
   }
   printf("Maximum of the ara is:  %d\n", n);
   i = 0; n = ara[i];
   while (i+1 != len) {
      if(n > ara[i+1]) n = ara[i+1];

   i++;
   }
   printf("Minimum of the ara is:  %d\n", n);
   return 0;
}
