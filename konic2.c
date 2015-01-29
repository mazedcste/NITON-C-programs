#include <stdio.h>
int main ()
{
    int i, j, n, m;
    n = 1;
    m = 21;
    for (i = 1; i <= 11; i++) {
        printf("\n");
        for (j = 1; j < n; j++) {
            printf(" ");
        } n++;
        for (j = 1; j <= m; j++) {
            printf("*");
        } m-=2;
    }

    return 0;
}
