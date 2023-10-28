#include <stdio.h>
int main(void)
{
  char name[40];
  printf("Enter name: ");
  scanf("%s", &name);
  puts(name);
  printf("%10.3s", &name); // Prints with a space between the end and the word and only prints 3 char
}