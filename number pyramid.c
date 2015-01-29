#include <stdio.h>
int main ()
{
   int m, n, i, j;
   printf("Number of line: ");
   scanf("%d", &n);
   printf("\n");

   for(i = 1; i <= n; i++) {
      for( j = 1; j <= (n - i); j++) {
         printf("    ");
      }
      m = i;
      for (j = 1; j <= i; j++) {
         printf("%4d", m++);
      }
      m -= 2;
      for( j = 1; j <= i-1; j++) {
         printf("%4d", m--);
      }
      printf("\n\n");
   }
   return 0;
}
