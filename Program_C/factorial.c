#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d is %lld.\n", n, factorial);
    }

    return 0;
}
