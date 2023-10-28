#include <stdio.h>
int sumOfElement(int A[], int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main(void)
{
    int A[] = {4, 3, 2, 1, 8};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElement(A, size);
    printf("sum is %d", total);
}