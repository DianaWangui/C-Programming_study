#include <stdio.h>
void increment(int *p)
{
    *p = *p + 1;
}
int main(void)
{
    int a = 10;
    increment(&a);
    printf("%d", a);
}