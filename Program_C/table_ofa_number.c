#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    int a;
    int table;
    printf("Enter a number:");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        table = a * i;
        printf(" %d * %d = %d \n", a, i, table);
    }
    getch();
}