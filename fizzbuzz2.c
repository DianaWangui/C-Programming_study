#include <stdio.h>
/**
 * main - print number from 1 to 100
 * but for multiples of three print fizz instead of the number
 * and for multiples of five print buzz
 * Return: Always 0(success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 != 0)
        {
            printf(" Fizz");
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            printf(" Buzz");
        }
        else if (i % 15 == 0)
        {
            printf(" FizzBuzz");
        }
        else if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return (0);
}