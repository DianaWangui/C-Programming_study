#include <stdio.h>
int main(void)
{
    int A[6] = {2, 4, 8, 5, 1, 9};
    printf("%d \n", A);       /* Prints  the address of array A which is the same as the address of base value of the array*/
    printf("%d \n", &A[0]);   /* Prints the address of the value at index 0 which is the base value of the array*/
    printf("%d\n", A[0]);     /* Prints the element at index 0 in the array*/
    printf("%d\n", *A);       /* Prints the element at index 0 or first element in the array*/
    printf("%d\n", &A);       /* Prints the address of array A which is the same as address of first element in the array*/
    printf("%d\n", &A[5]);    /* Prints the address of the of element at index 5 in the array*/
    printf("%d\n", A[5]);     /* Prints the element at index 5 in the array*/
    printf("%d\n", *(A + 5)); /* Prints the element at index 5 in the array*/
    printf("%d\n", *(A + 4)); /* Prints the element at index 4 in the array*/
    printf("%d\n", (A + 4));  /* Prints the address of the of element at index 4 in the array*/
    printf("%d \n", A + 6);   /* Prints the address of the of element at index 6 in the array*/
}