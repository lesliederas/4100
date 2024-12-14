#include <stdio.h>
#include "imul_idiv.h"

int main()
{
    int a = 6, b = 3;
    printf("imul(%d, %d) = %d\n", a, b, imul(a, b));
    printf("idiv(%d, %d) = %d\n", a, b, idiv(a, b));

    a = -6;
    printf("imul(%d, %d) = %d\n", a, b, imul(a, b));
    printf("idiv(%d, %d) = %d\n", a, b, idiv(a, b));

    a = 6, b = -3;
    printf("imul(%d, %d) = %d\n", a, b, imul(a, b));
    printf("idiv(%d, %d) = %d\n", a, b, idiv(a, b));

    return 0;
}