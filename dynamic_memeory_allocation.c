#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int n;
  int i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int *A = (int *)malloc(n * sizeof(int));
  for (i = 0; i <= n; i++)
  {
    A[i] = i + 1;
  }
  free(A);
  A[2] = 3;
  for (i = 0; i <= n; i++)
  {
    printf("%d \n", A[i]);
  }
}