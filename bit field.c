#include <stdio.h>
struct date
{
   unsigned day : 5;
   unsigned month : 4;
   unsigned year : 7;
};
int main ()
{
   struct date p_date;
   p_date.day = 16;
   p_date.month = 12;
   p_date.year = 14;


   typedef struct date pp;

   pp b_date;
   b_date.day = 05;
   b_date.month = 10;
   b_date.year = 94;

   printf("%d %d %d \n", p_date.day, p_date.month, p_date.year);
   printf("%d %d %d \n", b_date.day, b_date.month, b_date.year);

   return 0;
}
