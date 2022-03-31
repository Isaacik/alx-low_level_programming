#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 */

int main(void)
{
    int letter_in_number = 97;/* Range from 97 to 123*/
    while (letter_in_number < 123)
    {
        putchar(letter_in_number);
        letter_in_number++;
    }
    putchar(32);
    return (0);
}

