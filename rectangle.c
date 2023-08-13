#include <stdio.h>
void areaRectangle(int length, int width)
{
    int area = length * width;
    printf("Area of %d and %d is %d", length, width, area);
}
int main()
{
    areaRectangle(4, 5);
}
