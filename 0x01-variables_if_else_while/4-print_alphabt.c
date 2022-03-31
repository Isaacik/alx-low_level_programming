#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 * 
 * A program that prints the alphabet in lowercase except q and e
 */

int main(void)
{
    int letter_in_number = 97;/* Range from 97 to 123*/
    while (letter_in_number < 123)
    {
        if (letter_in_number ==  101 || letter_in_number == 113)
        {

        } 
        else
            putchar(letter_in_number);
        letter_in_number++;
    }
    putchar(32);
    return (0);
}

