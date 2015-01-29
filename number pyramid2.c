#include <stdio.h>
int main ()
{
   int i, j, n, m, p;
   printf("How many line: ");
   scanf("%d", &n);
   p = n;
   for (i = 1; i <= n; i++) {
      for (j = p; j >= 1; j--) {
         printf("     ");
      } p--;
      m = i;
      for (j = 1; j <= i; j++) {
         printf("%5d", m++);
      }
      m-=2;
      for (j = m; j >= i; j--) {
         printf("%5d", m--);
      }
   printf("\n\n");
   }
   return 0;
}
