#include<stdio.h>
int main()
{
    int B_year,B_month,B_day,p_year,p_day,p_month,f_year,f_month,f_day;
    printf("\n\n\t\tWELCOME TO OUR SOFTWARE");
     printf("\n\n\t\tAge Calculator");
      printf("\n\n\n\n\t\t\t PRESS ENTER");


    getch();

    printf("\n\n\tEnter Present-year  :");
    scanf("%d",&p_year);
    printf("\n\n\tEnter Present-month :");
    scanf("%d",&p_month);
    printf("\n\n\tEnter Present-day   :");
    scanf("%d",&p_day);
    printf("\n\n\n\t\t PRESS ENTER");
    getch();


    printf("\n\n\tEnter Birth-year  :");
    scanf("%d",&B_year);
    printf("\n\n\tEnter Birth-month :");
    scanf("%d",&B_month);
    printf("\n\n\tEnter & Birth-day :");
    scanf("%d",&B_day);
    printf("\n\n\t\t\tTo know your Age, PRESS ENTER");
    getch();



    if(p_year>B_year && p_month>=B_month && p_day>=B_day)

        {
        f_year=p_year-B_year;
        printf("\n\n\t\t\tYour Age is\n\n\t\t\t%d years     ",f_year);

        f_month=p_month-B_month;
         printf("\n\n\t\t\t%d months    ",f_month);
        f_day=p_day-B_day;
            printf("\n\n\t\t\t%d days   ",f_day,f_year);
        }


    else if( p_day<B_day && p_month<B_month)
        {
    f_year=(p_year-1)-B_year;
    printf("\n\n\t\t\tYour Age is\n\n\t\t\t%d years   ",f_year);
    f_month=B_month-(p_month-1);
    printf("\n\n\t\t\t%d Months  ",f_month);
    f_day=(p_day+30)- B_day;
    printf("\n\n\t\t\t%d Days    ",f_day);



        }


    else if( p_day<B_day)
        {
            f_year=p_year-B_year;
            printf(" \n\n\t\t\tYour Age is\n\n\t\t\t%d Years   ",f_year);
            f_month=(p_month-1)-B_month;
            printf(" \n\n\t\t\t%d Months  ",f_month);
            f_day=(p_day+30)- B_day;
            printf(" \n\n\t\t\t%d Days    ",f_day);



        }

    else if( p_month<B_month)
        {
            f_year=(p_year-1)-B_year;
            printf(" \n\n\t\t\tYour Age is\n\n\t\t\t%d Years   ",f_year);
            f_month=(p_month+12)- B_month;
            printf(" \n\n\t\t\t%d Months  ",f_month);
            f_day=p_day-B_day;
            printf(" \n\n\t\t\t%d Days    ",f_day);


    }

    printf("\n\n\t\t");

    printf("\n\n\t\tThanks for using it.......");
     getch();

}


