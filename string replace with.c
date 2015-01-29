#include <stdio.h>
#include <string.h>
int main ()
{
   char string[100];
   char replace[20];
   char with[20];
   char temp[100];
   int i, j, k, pos;

   printf("Enter a string: ");
   gets(string);
   printf("Enter another string:(be replaced) ");
   gets(replace);
   printf("Enter another string:(replace with) ");
   gets(with);

   pos = -1;
   for (i = 0; string[i] && (pos == -1); i++) {
      for (j = i, k = 0; string[j] == replace[k]; j++, k++) {
         if (replace[k+1] == '\0') pos = i;
      }
   }
   printf("position is:  %d \n", pos);

   if (pos != -1) {
      for (j = 0; j < pos; j++) temp[j] = string[j];
      for (k = 0; with[k]; k++, j++) temp[j] = with[k];
      for (k = pos + strlen(replace); string[k]; j++, k++) temp[j] = string[k];
      temp[j] = NULL;

      for (i = 0; string[i] = temp[i]; i++);
   }

   printf("%s\n", string);
   getch();
   return 0;
}
