#include <stdio.h>
int main(void)
{
    char C[5]; /*Including an extra space in the array to store the null character to terminate the array */
    C[0] = 'J';
    C[1] = 'o';
    C[2] = 'h';
    C[3] = 'n';
    C[4] = '\0'; /*The null charater in the extra space in the array to store the null character*/
    printf("%s", C);
}