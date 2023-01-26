include <stdio.h>
#include <limits.h>
#include <string.h>
#include "safeint.h"

struct SafeResult;

struct SafeResult safeadd(int x, int y)
{
    struct SafeResult result;

    if(x > 0 && y > INT_MAX - x)
    {
        result.errorflag = 1;
    }
    else if(x < 0 && y < INT_MIN - x)
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x + y;
        result.errorflag = 0;
    }

    return result;
}

struct SafeResult safesubtract(int x, int y)
{
    struct SafeResult result;
    if (x < 0 && y > INT_MAX + x)
    {
        result.errorflag = 1;
    }
    else if (x > 0 && y < INT_MIN + x)
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x - y;
        result.errorflag = 0;
    }

    return result;
}

struct SafeResult safemultiply(int x, int y)
{
    struct SafeResult result;

    if (x == -1 && y == INT_MIN)
    {
        result.errorflag = 1;
    }
    else if (x == -1 && y == INT_MIN)
    {
        result.errorflag = 1;
    }
    else if (x != 0 && y > INT_MAX / x)
    {
        result.errorflag = 1;
    }
    else if(x != 0 && y < INT_MIN / x)
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x * y;
        result.errorflag = 0;
    }

    return result;
}

struct SafeResult safedivide(int x, int y)
{
    struct SafeResult result;

    if(x >= 0 && y > INT_MAX - x)
    {
        result.errorflag = 1;
    }
    else if(x < 0 && y < INT_MIN - x)
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x / y;
        result.errorflag = 0;
    }

    return result;
}

int safestrtoint(char *s)
{
    int x = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        x = x * 10 + (s[i] - '0');
    }

    return x;
}
