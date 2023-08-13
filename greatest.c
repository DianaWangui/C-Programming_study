#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three random numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = c;

    if (a > largest)
    {
        printf("a is the largest");
    }
    else if (b > largest)
    {
        printf("b is the greatest");
    }
    else
    {
        printf("c is the greatest");
    }
    return 0;
}