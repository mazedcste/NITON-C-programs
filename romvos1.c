#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    n = 0;
    for (i = 1; i <= 10; i++) {
        for (j = 10; j > n; j--) {
            printf(" ");
        } n++;

        for (j = 1; j <= 10; j++) {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}

