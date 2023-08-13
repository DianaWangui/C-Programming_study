#include <stdio.h>
void calculateArea(int length, int width)
{
    int Area = length * width;
    printf("Area of %d and %d is %d", length, width, Area);
}
int main()
{
    calculateArea(6, 4);
}
#include <stdio.h>
int main()
{
    int length, width;
    printf("Enter width: ");
    scanf("&d", &width);

    printf("Enter length: ");
    scanf("&d", &length);

    int area = length * width;
    printf("Area is: %d\n", area);
    return 0;
}