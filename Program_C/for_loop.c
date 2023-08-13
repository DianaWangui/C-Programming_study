#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    int j;
    int k;
    for (i = 1, j = 0, k = 3; i <= 5, j <= 6, k > 1; i++, j++, k--)
    {
        printf("i = %d j= %d \n k =%d \n", i, j, k);
    }
    getch();
}