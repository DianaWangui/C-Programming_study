#include <stdio.h>
int main()
{
    int marks, passmark;
    printf("Enter student marks: ");
    scanf("%d", &marks);

    passmark = 50;
    if (marks >= passmark)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}