#include <stdio.h>
#include <limits.h>
#include "safeint.h"

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int arg1 = safestrtoint(argv[1]);
        if (arg1 > INT_MAX)
        {
            printf("Argument 1 is too big!");
        }
        else if (arg1 < INT_MIN)
        {
            printf("Argument 1 too small!");
        }
        int arg2 = safestrtoint(argv[2]);
        if (arg2 > INT_MAX)
        {
            printf("Argument 2 is too big!");
        }
        else if (arg2 < INT_MIN)
        {
            printf("Argument 2 too small!");
        }

        if(arg2 == 0)
        {
            printf("Cannot divide by zero!");
        }

        struct SafeResult result = safedivide(arg1, arg2);

        if (result.errorflag == 1)
        {
            printf("Error!");
        }
        else
        {
            printf("%d\n", result.value);
        }
    }
    else
    {
        printf("Expected 2 arguments!");
    }
}
