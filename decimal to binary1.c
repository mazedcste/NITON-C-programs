#include <stdio.h>
#include <math.h>
#include <string.h>
int main ()
{
    char binary[100], binary1[100];
    int i, j, n;
    int m = 95;
    for (i = 0; i < 100; i++) {
        if (m / 2 == 0) {
            binary[i] = '1';
            break;
        }
        else if (m % 2 == 0) {
            binary[i] = '0';
            m = m / 2;
        }
        else if (m % 2 != 0) {
            binary[i] = '1';
            m = m/2;
        }
    }


    n = strlen(binary);
    for (i = 0, j = n-1; i < n; i++, j--) {
        binary1[i] = binary[j];

    }
    binary1[i] = '\0';
    printf("%s\n", binary1);
    return 0;
}

