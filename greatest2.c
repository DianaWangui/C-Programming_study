#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter three random numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a > d)
    {
        printf("a is the largest");
    }
    else if (b >= a && b >= c && b > d)
    {
        printf("%d is the greatest", &b);
    }
    else if (c >= a && c >= b && c > d)
    {
        printf(" c is the greatest");
        else
        {
            printf("c is the greatest");
        }
        return 0;
    }
}