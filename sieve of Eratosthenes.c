#include <stdio.h>
#include <math.h>
int main ()
{
   int i, j;
   int ara[41];
   int n;


   for (i = 0; i <= 40; i++) {
      ara[i] = i;
   }
   for (i = 0; i <= 40; i++) {
      printf("%3d ", ara[i]);
   }
   printf("\n");

   for (i = 2; i <= 40; i++) {
      ara[i] = 1;
   }
   for (i = 2; i <= sqrt(40); i++) {
      for (j = 2; i*j <= 40; j++) {
         ara[i*j] = 0;
      }
   }
   for (i = 0; i <= 40; i++) printf("%3d ", ara[i]);
   while(1) {
         printf("Enter number: (press 0 to exit)");
         scanf("%d", &n);
   if(n == 0) break;
   else if (n > 40) continue;
   else if (0 == ara[n]) printf("%d is not a prime number.\n", n);
   else printf("%d is a prime number.\n", n);
   printf("\n");
   }
   return 0;
}
