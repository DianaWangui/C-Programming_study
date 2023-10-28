#include <stdio.h>
int main(void)
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("the size of integer is:  %d bytes \n", sizeof(int));
    printf("%d \n", p + 1); /*Increases the address by size of the data type which is 4 bytes*/
    printf("%d", *p);
    printf("%d", *p + 1); /* This will print some garbage value since in pointer *p + 1 has no value stored */
}