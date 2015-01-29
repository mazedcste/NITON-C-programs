#include <stdio.h>
int main ()
{
    int i;
    int n;
    int m = 1;
    while(1) {
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        m = m * i;
    }
    printf("The value of %d! is: %d\n", n, m);
    m = 1;
    }
    return 0;
}
