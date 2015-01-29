#include <stdio.h>
#include <string.h>
int main ()
{
   char str1[100];
   char str2[20];

   int x = 1;
   printf("Please enter a string: ");
   gets(str1);
   printf("Enter string to search in previous string: ");
   gets(str2);
   int i, k, m;
   for (i = 0; str1[i] != '\0'; i++) {
      for (k = 0, m = i; str1[m] == str2[k] || (str2[k] == '\0'); k++, m++) {
         if (str2[k] == '\0') {
            x = 0;
            break;
         }
      }
      if (str2[k] == '\0') break;
   }

   if (x == 0) printf("String is found at position %d\n", m - k+1);
   else printf("String is not found \n");
   return 0;
}
