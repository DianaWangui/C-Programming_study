#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, sum;
    char operator;
    printf("Enter the value of two numbers: ");
    scanf("%d %d", &a, &b);
    printf("enter the operator:");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("The addition of %d and %d is: %d", a, b, sum);
        break;

    default:
        break;
    }
    getch();
}