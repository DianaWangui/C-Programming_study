#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    int lower, upper;
    printf("enter a character: ");
    scanf("%c", &c);

    lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lower || upper)
    {
        printf("%c Is a vowel", c);
    }
    else
    {
        printf("%c Is a consonant", c);
    }
    getch();
}