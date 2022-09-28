#include <stdio.h>
#include <stdlib.h>

int main() {
  double x, y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  double *ptr_one, *ptr_two, *ptr_three;
  ptr_one = &x;
  ptr_two = &x;
  ptr_three = &y;

  printf("memory address of ptr_one: %p\n", ptr_one);
  printf("memory address of ptr_two: %p\n", ptr_two);
  printf("memory address of ptr_three: %p\n", ptr_three);

return 0;
}
