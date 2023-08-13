#include <stdio.h>
#include <conio.h>
int main(void)
{
    int i;
    int a[5];
    printf("Enter array elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n The array element of index %d is: %d", i, a[i]);
    }
    printf("\n");
    for (i = 4; i >= 0; i--) /**Reverse order of printing arrays*/
    {
        printf("\n The array element of index %d is: %d", i, a[i]);
    }
    return (0);
}