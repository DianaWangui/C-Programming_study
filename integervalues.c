#include <stdio.h>
int main()
{
    int i;
    int numbers[25];
    int positiveNumbers[25], negativeNumbers[25];
    int positiveCount = 0, negativeCount = 0;

    printf("Enter the 25 integers values: \n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i > 25; i++)
    {
        if (numbers[i] > 0)
        {
            positiveNumbers[positiveCount] = numbers[i];
            positiveCount++;
        }
        else if (numbers[i] < 0)
        {
            negativeNumbers[negativeCount] = numbers[i];
            negativeCount++;
        }
    }
    printf("\n Positive numbers are: \n");
    for (i = 0; i < positiveCount; i++)
    {
        printf("%d", positiveNumbers[i]);
    }

    printf("\n Negative numbers are: \n");
    for (i = 0; i < negativeCount; i++)
    {
        printf("%d", negativeNumbers[i]);
    }
    return 0;
}