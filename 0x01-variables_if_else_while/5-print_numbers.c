#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 * A program that prints all single digit numbers of base10
 */

int main(void)
{
    int number = 0;/* Range from 97 to 123*/
    while (number < 10)
    {
        printf("%d",number);
        number++;
    }
    putchar(32);
    return (0);
}
