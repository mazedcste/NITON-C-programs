#include <stdio.h>
int main ()
{
   int ara[10] = {1,2,3,4,5,6,7,8,9,10};
   int i;
   int n;
   printf("Search this number in the ara: ");
   scanf("%d", &n);

   for (i = 0; i < 10; i++) {
      if (ara[i] == n) {
         printf("Number: %d is found in the ara & it is %dth in the ara...\n", ara[i], i+1);
         break;
      }
   }
   if (i == 10)
      printf("Number: %d is not found in the ara...\n", n);
   getch();
   return 0;
}
