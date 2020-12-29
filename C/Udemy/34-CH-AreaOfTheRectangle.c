#include <stdio.h>

int main()
{
  double a = 13.0; //width
  double b = 9.4; //height
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2*(a+b);
  area = a*b;

  printf("The perimeter of the rectangle is %.2f.\n", perimeter);
  printf("The area of the rectangle is %.2f.", a*b);

  return 0;
}
