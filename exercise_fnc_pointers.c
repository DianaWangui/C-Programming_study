/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
  *cc = 'o';
  ccc = 'l';
  printf("Value of ccc is %c\n", ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
  char c;
  char *p;

  p = &c;
  c = 'H';
  printf("The value of c is %c\n", c);
  modif_my_char_var(p, c);
  printf("The value of c is %c\n", c);
  printf("The address of c is %p\n", p);
  return (0);
}