//
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.....(revision needed)
#include <stdio.h>
int main() 
{
    
  int n, i, a = 1, b = 1, sum;
  printf("Sum upto:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    a = b;
    b = sum;
    sum = a + b;
  }
printf("Sum of the series:%d", sum);
return 0;
}
