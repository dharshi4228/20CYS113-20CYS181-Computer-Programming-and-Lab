
//Number Diamond Pattern
#include <stdio.h>
int main()
{
  int n, c, k;
  scanf("%d", &n);
  for (k = 1; k <= n; k++)
  {
    for (c = 0; c < n-k; c++)
      printf(" ");
    for (c = 0; c < 2*k-1; c++)
      printf("%d ", 9-c);
    printf("\n");
  }
  for (k = 1; k <= n - 1; k++)
  {
    for (c = 0; c < k; c++)
      printf(" ");
    for (c = 0 ; c < 2*(n-k)-1; c++)
      printf("%d ",9-c);
    printf("\n");
  }
return 0;
}