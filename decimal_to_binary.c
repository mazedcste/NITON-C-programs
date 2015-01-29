#include <stdio.h>
#include <math.h>
int main ()
{
    char binary[100];
    int i, j, n;
    int m;
    while(1) {
    scanf("%d", &m);
    for (i = 0; i < 100; i++) {
        if (pow(2 , i) > m) {
            break;
        }
        n = i;
    }
    for (i = n, j = 0; i >= 0; i--, j++) {
        if (m >= pow(2 , i)) {
            binary[j] = '1';
            m = m - (pow(2 , i));
        }
        else if (m < pow(2 , i)) {
            binary[j] = '0';
        }
    }
    binary[j] = '\0';
    printf("%s\n", binary);
    }
    return 0;
}
