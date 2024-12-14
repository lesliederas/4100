#include "imul_idiv.h"/Users/lesliederas/Desktop/imul_idiv_library/imul_idiv.c

int imul(int a, int b)
{
    int result = 0;
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;

    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    while (b > 0)
    {
        result += a;
        b--;
    }
    return sign * result;
}

int idiv(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }

    int result = 0;
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;

    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    while (a >= b)
    {
        a -= b;
        result++;
    }
    return sign * result;
}
