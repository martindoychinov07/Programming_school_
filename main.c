#include <stdio.h>
#include "quadraticroots.h"

int main()
{
    struct QuadraticRootsResult roots;
    double a;
    double b;
    double c;

    printf("Enter a:");
    scanf("%lf", &a);

    printf("Enter b:");
    scanf("%lf", &b);

    printf("Enter c:");
    scanf("%lf", &c);

    roots = findroots(a, b, c);

    if(roots.norealroots == 0)
    {
        printf("%lf", roots.x1);
        printf("\n%lf", roots.x2);
        /*  printf("%d", (int)roots.x1);
            printf("\n%d", (int)roots.x2);
        */
        /*  printf("%f", (float)roots.x1);
            printf("\n%f", (float)roots.x2);
        */
    }
    else if(roots.norealroots == 1)
    {
        printf("No real roots!");
    }

    return 0;
}

main.c
Показва се „main.c“.
