#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 * A program that prints all numbers of base 16 in lowercase
 */

int main(void)
{
    int number = 0; /* Range from 0 to 9*/
    int hexdecimal_num = 48;
    int hexdecimal_alpha = 97;
    while (number < 16)
    {
        if (number <= 9)
        {
            putchar(hexdecimal_num);    /* for 0 to 9 : 48 - 57*/
            hexdecimal_num++;
        }
        else
        {
            putchar(hexdecimal_alpha); /* for 10 (a) to 15 (f) : 48 - 57*/
            hexdecimal_alpha++;
        }
        number++;
    }
    putchar(32);
    return (0);
}
