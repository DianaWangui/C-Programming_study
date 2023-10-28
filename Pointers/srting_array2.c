#include <stdio.h>
#include <string.h>
int main(void)
{
    char C[4] = "John";
    printf("The size of C is %d\n", sizeof(C));
    int len = strlen(C);
    printf("Length = %d\n", len);
    printf("%s", C);
}