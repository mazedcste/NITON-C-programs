#include <stdio.h>
int main ()
{
   printf("\n%s%s \n%s%s\n %s%d\n %s%s\n", "__DATE__ = ", __DATE__,
                                           "__FILE__ = ", __FILE__,
                                           "__LINE__ = ", __LINE__,
                                           "__TIME__ = ", __TIME__ );
   //__STDC__;
   return 0;
}
