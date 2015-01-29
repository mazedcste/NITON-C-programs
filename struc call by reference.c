#include <stdio.h>
struct info
{
   char *name;
   int age;
};
void refer (struct info *ptr)
{
   printf("Name: %s\nAge: %d\n", ptr->name, ptr->age);
}
int main ()
{
   struct info mazed, rupok, *pr;
   mazed.name = "Md. Abdul Mazed";
   mazed.age = 19;
   refer (&mazed);
   rupok.name = "Rupok";
   rupok.age = 10;
   refer (&rupok);

   pr = &mazed;
   refer (pr);

   return 0;
}
