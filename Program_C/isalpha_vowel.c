#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char g;
    int lower, upper;
    printf("The the character; ");
    scanf("%c", &g);
    lower = (g == 'a' || g == 'e' || g == 'i' || g == 'o' || g == 'u');
    upper = (g == 'A' || g == 'E' || g == 'I' || g == 'O' || g == 'U');

    if (!isalpha(g))
    {
        printf("Its not a character");
    }
    else if (lower || upper)
    {
        printf("%c is a vowel", g);
    }
    else
    {
        printf("%c is a consonant", g);
    }
    getch();
}