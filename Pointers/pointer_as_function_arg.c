#include <stdio.h>
void increment(int a)
{
    a = a + 1;

    printf("Adress id %d \n", &a);
    printf("%d \n", a); /*Returns 11 since its incremented */
}
int main(void)
{
    int a = 10;
    increment(a);
    printf("Adress id %d \n", &a);
    printf("%d \n", a); /*Returns 10 since the a in the increment function is not equal to a in main fxn*/
}