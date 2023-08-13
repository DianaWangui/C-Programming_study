#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 100;
    int b = 40;
    int c = 20;

    if (a == 100)
        if (b == 50)
            if (c == 21)
            {
                printf("You are successful");
            }
            else
            {
                printf("You are poor");
            }
        else
        {
            printf("You have nothing");
        }
    getch();
}