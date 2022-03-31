#include <stdio.h>

/**
 * main - Entry point
 * return 0 (Success)
 *
 * A program that prints all possible different combinations of two digits
 */

int main(void)
{
    int firstnumber = 48; /* Range from 0 to 9*/
    
    while (firstnumber <= 57)
    {
        int secondnumber = 48; /* Range from 0 to 9*/
        while (secondnumber <= 57)
        {
            if (secondnumber == firstnumber || firstnumber > secondnumber)
            {
                
            }
            else
            {
                putchar(firstnumber);
                putchar(secondnumber);
                putchar(44);
            }
        
            secondnumber++;
            
        }
        firstnumber++;
    }
    putchar(32);
    return (0);
}
