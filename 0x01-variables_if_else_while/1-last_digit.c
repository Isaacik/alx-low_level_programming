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
    int lastdigit;

    srand(time(0));
    n = rand() - RAND_MAX/2;

    /**
     * if statement - checks the sign of the number generated
     */
    lastdigit = n % 10; /* returns the last number as the remainder*/
    if (lastdigit < 6)
    {
        if (lastdigit == 0)
            printf("Last digit of %d is %d and is 0\n", n, lastdigit);
        else
            printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastdigit);
    }
    else
        printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);

    return (0);
}
