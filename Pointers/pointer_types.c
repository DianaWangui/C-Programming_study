#include <stdio.h>
int main(void)
{
    int a = 1025;
    int *p;
    p = &a;
    printf("The size of integer is: %d bytes \n", sizeof(int));
    printf("The address of a is: %d and the value of a is %d\n", p, *p);

    char *p0;
    p0 = (char *)p; /* Type casting*/
    printf("The size of character is: %d bytes \n", sizeof(char));
    printf("The address is: %d and the value is %d", p0, *p);
}