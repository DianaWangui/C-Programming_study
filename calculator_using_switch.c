#include <stdio.h>
int main()
{
    char operator;
    printf("Enter any of this the operators(*, +, -, /): ");
    scanf("%c", &operator);

    double num1, num2;

    printf("Enter num1 and num2:");
    scanf("%lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf('%lf + %lf = %lf', num1, num2, num1 + num2);
        break;
    case '*':
        printf('%lf * %lf = %lf', num1, num2, num1 * num2);
        break;
    case '-':
        printf('%lf - %lf = %lf', num1, num2, num1 - num2);
        break;
    case '/':
        printf('%lf / %lf = %lf', num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}