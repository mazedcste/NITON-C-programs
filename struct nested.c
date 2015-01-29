#include <stdio.h>
int main ()
{
   struct student {
      char *name;
      char *roll;
      char *dept_name;
      char *var_name;
      struct term {
         int sem;
         struct gpa {
            float gpa;
         } gpa1;
      } term1;
      float cgpa;
   } mazed;

   mazed.name = "Md. Abdul Mazed";
   mazed.var_name = "NSTU";
   mazed.roll = "ASH 1301018M";
   mazed.dept_name = "CSTE";
   mazed.term1.sem = 8;
   mazed.term1.gpa1.gpa = 3.44;
   mazed.cgpa = 3.00;
   printf("Mazed's info: \n");
   printf("%s\n", mazed.name);
   printf("%s\n", mazed.var_name);
   printf("%s\n", mazed.dept_name);
   printf("%s\n", mazed.roll);
   printf("%d\n", mazed.term1.sem);
   printf("%.2f\n", mazed.term1.gpa1.gpa);
   printf("%.2f\n", mazed.cgpa);
   getch();
   return 0;
}
