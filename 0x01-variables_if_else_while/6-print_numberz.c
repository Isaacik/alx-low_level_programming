#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 * A program that prints all single digit numbers of base10
 */

int main(void)
{
    int number = 48;/* Range from 0 to 9*/
    while (number <= 57)
    {
        putchar(number);
        number++;
    }
    putchar(32);
    return (0);
}
