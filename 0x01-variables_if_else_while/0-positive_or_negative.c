#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /**
     * if statement checking the sign of the number generated
     * to know whether it is a positive or a negative
     *
     */
    if (n >= 0)
        if (n == 0)
            printf("is zero\n");
        else
            printf("is positive\n");
    else
        printf("is negative\n");
    return (0);
}
