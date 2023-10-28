#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i;
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int *A = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
  {
    A[i] = i + 1;
  }
  int *B = (int *)realloc(A, n / 2 * sizeof(int));
  printf("Prev block address is %d and the new address is %d", A, B);
  for (i = 0; i < n; i++)
  {
    printf("%d\n", B[i]);
  }
}