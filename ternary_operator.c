/*#include <stdio.h>
int main()
{
    int age = 2;
    (age >= 18) ? printf("You can board") : printf("You cant board");
}*/
#include <stdio.h>
int main()
{
    char operator= '*';
    int num1 = 3;
    int num2 = 4;
    int result;

    result = (operator== '+') ? (num1 + num2) : (num1 - num2);
    printf("%d", result);
    return 0;
}