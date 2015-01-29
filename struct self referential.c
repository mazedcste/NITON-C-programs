#include <stdio.h>
int main ()
{
   struct node
   {
      int x;
      struct node *next;
   };

   struct node head, tail, link;
   head.x = 10;
   tail.x = 20;
   link.x = 30;

   head.next = NULL;
   tail.next = NULL;
   link.next = NULL;
   printf("%d %d %d\n", head.x, tail.x, link.x);


   head.next = &tail;
   tail.next = &link;

   int a, b;
   a = head.next->x;
   b = tail.next->x;

   printf("%d %d \n", a, b);

   getch();
   return 0;
}
