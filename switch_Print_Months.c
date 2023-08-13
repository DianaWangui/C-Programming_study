#include <stdio.h>
int main()
{
    int month;
    printf("Enter any number between 1 to 12: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("This is January");
        break;
    case 2:
        printf("This is Feb");
        break;
    case 3:
        printf("This is March");
        break;
    case 4:
        printf("This is April");
        break;
    case 5:
        printf("This is May");
        break;
    case 6:
        printf("This is Jun");
        break;
    case 7:
        printf("This is Jul");
        break;
    case 8:
        printf("This is Aug");
        break;
    case 9:
        printf("This is Sept");
        break;
    case 10:
        printf("This is Oct");
        break;
    case 11:
        printf("This is Nov");
        break;
    case 12:
        printf("This is Dec");
        break;
    }
    return 0;
}