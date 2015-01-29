#include <stdio.h>
int main ()
{
   int i, j, k, m, n;
   char str[100];
   scanf("%d", &k);
   for (j = 0; j <= k; j++) {
         m = 0;
         n = 0;
   gets(str);
   if (j == 0) continue;
   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] >= '0' && str[i] <= '9') {
         if (n == 0) {
            m++;
            n = 1;
         }
      }
      if (str[i] == ' ') n = 0;
   }
   printf("%d\n", m);
   n = 0;
   }
   return 0;
}
