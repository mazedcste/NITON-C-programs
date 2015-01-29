#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

int main(void)
{
   int token34 = 50;
   int token45  = 10;

   tokenpaster(45);  //printf ("token34 = %d", token34);
   return 0;
}
