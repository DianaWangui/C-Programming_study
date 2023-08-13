#include <stdio.h>
int main()
{
    float width, length, area;

    printf("enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    area = length * width;
    printf("The are of the rectangle is %d", area);
    return 0;
}