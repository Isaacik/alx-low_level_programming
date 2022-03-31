#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 */

int main(void)
{
    int letter_in_number = 97;/* Range from 97 to 122 */
    while (letter_in_number <= 122)
    {
        putchar(letter_in_number);
        letter_in_number++;
    }
    int uppercase_in_number = 65; /* Range from 65 to 90 */
    while (uppercase_in_number <= 90)
    {
        putchar(uppercase_in_number);
        uppercase_in_number++;
    }
    putchar(32);
    return (0);
}

