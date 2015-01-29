#include <stdio.h>
void lcm (int n, int m)
{
   int i;
   for (i = 1; i <= n*m; i++) {
      if (i % n == 0 && i % m == 0) {
         printf("LCM in function is %d", i);
         break;
      }
   }
}
int main ()
{
   int x, y, i, j;
   printf("Enter two number: ");
   scanf("%d %d", &x, &y);

   for (i = 1; i <= x; i++) {
      for (j = 1; j <= y; j++) {
         if (x * j == y * i) {
            printf("LCM is %d\n", x*j);
            i = i + x;
         }
      }
   }
   lcm (x, y);
   return 0;
}
