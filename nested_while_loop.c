#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0;
    int j = 1;
    while (i <= 3)
    {
        while (j <= 3)
        {
            printf("%d", j++);
        }
        printf("%d \n", i++);
    }
}