#include <stdio.h>
int main(void)
{
    int a;
    int *p;
    a = 3;
    p = &a;
    printf("%d \n", a);  /* printing value of a */
    printf("%d \n", p);  /* printing the value of p which is the address of a*/
    printf("%d \n", &a); /* printing the address of a which equal to value of p*/
    printf("%d \n", *p); /* printing the value of the address of p which is equal to value of a*/

    *p = 12;             /*derefrencing */
    printf("%d \n", *p); /* printing the value of the address of p which is equal to value of a*/
    printf("%d \n", p);  /* printing the value of p which is the address of a*/
    printf("%d \n", a);  /* printing value of a */
    printf("%d \n", &a); /* printing the address of a which equal to value of p*/
}