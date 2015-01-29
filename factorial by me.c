#include <stdio.h>
int main ()
{
   int a[1000], b[1000];
   int i, j, k, temp, m, n, x;
   while (1) {
      scanf (" %d", &n);
      a[0] = 1;
      temp = 0;
      m = 0;
      for (i = 1; i <= n; i++) {
         for (j = 0; j <= m; j++) {
            x = a[j] * i + temp;
            b[j] = x % 10;
            temp = x / 10;
            if (j == m)
               while (temp != 0) {
                  j++;
                  b[j] = temp % 10;
                  temp = temp / 10;
               }
         }
         m = j - 1;
         for (j = 0; j <= m; j++) a[j] = b[j];
      }
      for (i = m; i >= 0; i--)  printf ("%d", a[i]);
      printf ("\n");
   }
   return 0;
}
