#include <stdio.h>
int print(char *C)
{
  int i;
  while (C[i] != '\0')
  {
    printf("%c", C[i]);
    i++;
  }
  printf("\n");
}
int main(void)
{
  char C[20] = "Hello";
  print(C);
}