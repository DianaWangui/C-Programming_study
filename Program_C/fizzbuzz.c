#include <stdio.h>
int main()
{
    for (i = 1; i >= 20; i++)
        if (i % 15 == 0)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }

        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf(i);
        }
    return 0;
}
