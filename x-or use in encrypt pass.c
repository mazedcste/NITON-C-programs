#include <stdio.h>
void encryp (char *pass);
int main ()
{
   char pass[20];
   printf("Enter your password: ");
   gets(pass);

   encryp(pass);
   printf("The encrypted version of your password is: ");
   puts(pass);
   getch();
   return 0;
}
void encryp(char *pass)
{
   while (*pass != 0) {
      *pass++ ^= 52;
   }
}
