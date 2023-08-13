#include <stdio.h>
int main()
{
    int length, area;
    printf(" Enter the length of square: ");
    scanf("%d", &length);

    area = length * length;
    printf("The area is : %d", area);
    return 0;
}