#include <stdio.h>
int main(void)
{
    int A[] = {3, 5, 6, 2, 7, 9};
    int i;
    for (i = 0; i <= 6; i++)
    {
        printf("Address = %d \n", &A[i]);
        printf("Address = %d\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A + i));
    }
}