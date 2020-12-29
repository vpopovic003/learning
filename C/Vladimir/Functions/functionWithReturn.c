#include <stdio.h>

int multiplyTwoNumbers (int x, int y)
{
  int result = x * y;
  return result;
}

int main (void)
{
  int x, y;
  int result = 0;

  printf("Unesite vrednost za x: ");
  scanf("%d", &x);
  printf("Unesite vrednost za y: ");
  scanf("%d", &y);

  result = multiplyTwoNumbers (x, y); //vraca vrednost koju moram dodeliti necemu u main funkciji *result
  printf ("The product of %d multiplied by %d is: %d\n", x, y, result);
}
