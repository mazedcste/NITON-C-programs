#include <stdio.h>
int main ()
{
    int i, j, n, p;
    n = 10;
    p = 1;
    for (i = 1; i <= 10; i++) {
        printf("\n");
        for (j = 1; j <= n; j++) {
            printf(" ");
        } n--;
        for (j = 1; j <= p; j++) {
            printf("%2d", j);
        } p+=2;
    }

    return 0;
}
