#include <stdio.h>
int main(void)
{
    int a = 1025;
    int *p;
    p = &a;
    int **q = &p;
    int ***r = &q;
    printf("%d \n", *p);   /* Will print value stored in a which is pointed by p which stores its address*/
    printf("%d \n", *q);   /* This will store the address of the pointer p */
    printf("%d \n", **q);  /* This stores the value pointed by the pointer p which is the value of of a*/
    printf("%d \n", **r);  /* Stores the address of of pointer q */
    printf("%d \n", ***r); /* Stores the value that was derefrenced by r which is value of a*/
}