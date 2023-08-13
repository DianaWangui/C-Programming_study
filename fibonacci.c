#include <stdio.h>

void fibonacciSeries(int n)
{
    int num1 = 0, num2 = 1, nextNum;

    printf("Fibonacci Series up to %d:\n", n);
    printf("%d, %d, ", num1, num2);

    nextNum = num1 + num2;

    while (nextNum <= n)
    {
        printf("%d, ", nextNum);
        num1 = num2;
        num2 = nextNum;
        nextNum = num1 + num2;
    }

    printf("\n");
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
    }
    else
    {
        fibonacciSeries(num);
    }

    return 0;
}
