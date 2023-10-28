#include <stdio.h>
int main(void)
{
    int a;
    int *p;
    a = 3;
    p = &a;

    printf("%d \n", p);  /* printing the value of p which is the address of a*/
    printf("%d \n", *p); /* printing the value of the address of p which is equal to value of a*/

    int b = 20;
    *p = b;
    printf("%d\n", p);

    p = &b;
    /* Changing the pointer now to store address of b */
    printf("%d\n", p);
}